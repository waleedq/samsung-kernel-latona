#!/bin/bash -x
CYANOGENMOD=../../..

# Make mrproper
make mrproper

# Set config
make latona_galaxysl_defconfig

# Make modules
nice -n 10 make -j8 modules

# Copy modules
find -name '*.ko' -exec cp -av {} $CYANOGENMOD/device/samsung/galaxysl/modules/ \;

# Build kernel
nice -n 10 make -j8 zImage

# Copy kernel
cp arch/arm/boot/zImage $CYANOGENMOD/device/samsung/galaxysl/kernel

# Make mrproper
make mrproper

