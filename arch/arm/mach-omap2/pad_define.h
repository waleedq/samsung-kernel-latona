
#define PAD_CONF_SIZE 327
#define PINOUT_CONTROL_BASE		0x48002000

struct omap_pad_conf {
	const char name[20];
	u32	addr;
};

u16 pad_conf[PAD_CONF_SIZE];
static struct omap_pad_conf board_pad_conf[] = {
	{"SDRC_D0",(PINOUT_CONTROL_BASE +  0x0030)},
	{"SDRC_D1",(PINOUT_CONTROL_BASE +  0x0032)},
	{"SDRC_D2",(PINOUT_CONTROL_BASE +  0x0034)},
	{"SDRC_D3",(PINOUT_CONTROL_BASE +  0x0036)},
	{"SDRC_D4",(PINOUT_CONTROL_BASE +  0x0038)},
	{"SDRC_D5",(PINOUT_CONTROL_BASE +  0x003A)},
	{"SDRC_D6",(PINOUT_CONTROL_BASE +  0x003C)},
	{"SDRC_D7",(PINOUT_CONTROL_BASE +  0x003E)},
	{"SDRC_D8",(PINOUT_CONTROL_BASE +  0x0040)},
	{"SDRC_D9",(PINOUT_CONTROL_BASE +  0x0042)},
	{"SDRC_D10",(PINOUT_CONTROL_BASE +  0x0044)},
	{"SDRC_D11",(PINOUT_CONTROL_BASE +  0x0046)},
	{"SDRC_D12",(PINOUT_CONTROL_BASE +  0x0048)},
	{"SDRC_D13",(PINOUT_CONTROL_BASE +  0x004A)},
	{"SDRC_D14",(PINOUT_CONTROL_BASE +  0x004C)},
	{"SDRC_D15",(PINOUT_CONTROL_BASE +  0x004E)},
	{"SDRC_D16",(PINOUT_CONTROL_BASE +  0x0050)},
	{"SDRC_D17",(PINOUT_CONTROL_BASE +  0x0052)},
	{"SDRC_D18",(PINOUT_CONTROL_BASE +  0x0054)},
	{"SDRC_D19",(PINOUT_CONTROL_BASE +  0x0056)},
	{"SDRC_D20",(PINOUT_CONTROL_BASE +  0x0058)},
	{"SDRC_D21",(PINOUT_CONTROL_BASE +  0x005A)},
	{"SDRC_D22",(PINOUT_CONTROL_BASE +  0x005C)},
	{"SDRC_D23",(PINOUT_CONTROL_BASE +  0x005E)},
	{"SDRC_D24",(PINOUT_CONTROL_BASE +  0x0060)},
	{"SDRC_D25",(PINOUT_CONTROL_BASE +  0x0062)},
	{"SDRC_D26",(PINOUT_CONTROL_BASE +  0x0064)},
	{"SDRC_D27",(PINOUT_CONTROL_BASE +  0x0066)},
	{"SDRC_D28",(PINOUT_CONTROL_BASE +  0x0068)},
	{"SDRC_D29",(PINOUT_CONTROL_BASE +  0x006A)},
	{"SDRC_D30",(PINOUT_CONTROL_BASE +  0x006C)},
	{"SDRC_D31",(PINOUT_CONTROL_BASE +  0x006E)},
	{"SDRC_CLK",(PINOUT_CONTROL_BASE +  0x0070)},
	{"SDRC_DQS0",(PINOUT_CONTROL_BASE +  0x0072)},
	{"SDRC_DQS1",(PINOUT_CONTROL_BASE +  0x0074)},
	{"SDRC_DQS2",(PINOUT_CONTROL_BASE +  0x0076)},
	{"SDRC_DQS3",(PINOUT_CONTROL_BASE +  0x0078)},
	{"GPMC_A1",(PINOUT_CONTROL_BASE + 0x007A)},
	{"GPMC_A2",(PINOUT_CONTROL_BASE + 0x007C)},
	{"GPMC_A3",(PINOUT_CONTROL_BASE + 0x007E)},
	{"GPMC_A4",(PINOUT_CONTROL_BASE + 0x0080)},
	{"GPMC_A5",(PINOUT_CONTROL_BASE + 0x0082)},
	{"GPMC_A6",(PINOUT_CONTROL_BASE + 0x0084)},
	{"GPMC_A7",(PINOUT_CONTROL_BASE + 0x0086)},
	{"GPMC_A8",(PINOUT_CONTROL_BASE + 0x0088)},
	{"GPMC_A9",(PINOUT_CONTROL_BASE + 0x008A)},
	{"GPMC_A10",(PINOUT_CONTROL_BASE + 0x008C)},
	{"GPMC_D0",(PINOUT_CONTROL_BASE + 0x008E)},
	{"GPMC_D1",(PINOUT_CONTROL_BASE + 0x0090)},
	{"GPMC_D2",(PINOUT_CONTROL_BASE + 0x0092)},
	{"GPMC_D3",(PINOUT_CONTROL_BASE + 0x0094)},
	{"GPMC_D4",(PINOUT_CONTROL_BASE + 0x0096)},
	{"GPMC_D5",(PINOUT_CONTROL_BASE + 0x0098)},
	{"GPMC_D6",(PINOUT_CONTROL_BASE + 0x009A)},
	{"GPMC_D7",(PINOUT_CONTROL_BASE + 0x009C)},
	{"GPMC_D8",(PINOUT_CONTROL_BASE + 0x009E)},
	{"GPMC_D9",(PINOUT_CONTROL_BASE + 0x00A0)},
	{"GPMC_D10",(PINOUT_CONTROL_BASE + 0x00A2)},
	{"GPMC_D11",(PINOUT_CONTROL_BASE + 0x00A4)},
	{"GPMC_D12",(PINOUT_CONTROL_BASE + 0x00A6)},
	{"GPMC_D13",(PINOUT_CONTROL_BASE + 0x00A8)},
	{"GPMC_D14",(PINOUT_CONTROL_BASE + 0x00AA)},
	{"GPMC_D15",(PINOUT_CONTROL_BASE + 0x00AC)},
	{"GPMC_nCS0",(PINOUT_CONTROL_BASE + 0x00AE)},
	{"GPMC_nCS1",(PINOUT_CONTROL_BASE + 0x00B0)},
	{"GPMC_nCS2",(PINOUT_CONTROL_BASE + 0x00B2)},
	{"GPMC_nCS3",(PINOUT_CONTROL_BASE + 0x00B4)},
	{"GPMC_nCS4",(PINOUT_CONTROL_BASE + 0x00B6)},
	{"GPMC_nCS5",(PINOUT_CONTROL_BASE + 0x00B8)},
	{"GPMC_nCS6",(PINOUT_CONTROL_BASE + 0x00BA)},
	{"GPMC_nCS7",(PINOUT_CONTROL_BASE + 0x00BC)},
	{"GPMC_CLK",(PINOUT_CONTROL_BASE + 0x00BE)},
	{"GPMC_nADV_ALE",(PINOUT_CONTROL_BASE + 0x00C0)},
	{"GPMC_nOE",(PINOUT_CONTROL_BASE + 0x00C2)},
	{"GPMC_nWE",(PINOUT_CONTROL_BASE + 0x00C4)},
	{"GPMC_nBE0_CLE",(PINOUT_CONTROL_BASE + 0x00C6)},
	{"GPMC_nBE1",(PINOUT_CONTROL_BASE + 0x00C8)},
	{"GPMC_nWP",(PINOUT_CONTROL_BASE + 0x00CA)},
	{"GPMC_WAIT0",(PINOUT_CONTROL_BASE + 0x00CC)},
	{"GPMC_WAIT1",(PINOUT_CONTROL_BASE + 0x00CE)},
	{"GPMC_WAIT2",(PINOUT_CONTROL_BASE + 0x00D0)},
	{"GPMC_WAIT3",(PINOUT_CONTROL_BASE + 0x00D2)},
	{"DSS_PCLK",(PINOUT_CONTROL_BASE + 0x00D4)},
	{"DSS_HSYNC",(PINOUT_CONTROL_BASE + 0x00D6)},
	{"DSS_VSYNC",(PINOUT_CONTROL_BASE + 0x00D8)},
	{"DSS_ACBIAS",(PINOUT_CONTROL_BASE + 0x00DA)},
	{"DSS_DATA0",(PINOUT_CONTROL_BASE + 0x00DC)},
	{"DSS_DATA1",(PINOUT_CONTROL_BASE + 0x00DE)},
	{"DSS_DATA2",(PINOUT_CONTROL_BASE + 0x00E0)},
	{"DSS_DATA3",(PINOUT_CONTROL_BASE + 0x00E2)},
	{"DSS_DATA4",(PINOUT_CONTROL_BASE + 0x00E4)},
	{"DSS_DATA5",(PINOUT_CONTROL_BASE + 0x00E6)},
	{"DSS_DATA6",(PINOUT_CONTROL_BASE + 0x00E8)},
	{"DSS_DATA7",(PINOUT_CONTROL_BASE + 0x00EA)},
	{"DSS_DATA8",(PINOUT_CONTROL_BASE + 0x00EC)},
	{"DSS_DATA9",(PINOUT_CONTROL_BASE + 0x00EE)},
	{"DSS_DATA10",(PINOUT_CONTROL_BASE + 0x00F0)},
	{"DSS_DATA11",(PINOUT_CONTROL_BASE + 0x00F2)},
	{"DSS_DATA12",(PINOUT_CONTROL_BASE + 0x00F4)},
	{"DSS_DATA13",(PINOUT_CONTROL_BASE + 0x00F6)},
	{"DSS_DATA14",(PINOUT_CONTROL_BASE + 0x00F8)},
	{"DSS_DATA15",(PINOUT_CONTROL_BASE + 0x00FA)},
	{"DSS_DATA16",(PINOUT_CONTROL_BASE + 0x00FC)},
	{"DSS_DATA17",(PINOUT_CONTROL_BASE + 0x00FE)},
	{"DSS_DATA18",(PINOUT_CONTROL_BASE + 0x0100)},
	{"DSS_DATA19",(PINOUT_CONTROL_BASE + 0x0102)},
	{"DSS_DATA20",(PINOUT_CONTROL_BASE + 0x0104)},
	{"DSS_DATA21",(PINOUT_CONTROL_BASE + 0x0106)},
	{"DSS_DATA22",(PINOUT_CONTROL_BASE + 0x0108)},
	{"DSS_DATA23",(PINOUT_CONTROL_BASE + 0x010A)},
	{"CAM_HS",(PINOUT_CONTROL_BASE + 0x010C)},
	{"CAM_VS",(PINOUT_CONTROL_BASE + 0x010E)},
	{"CAM_XCLKA",(PINOUT_CONTROL_BASE + 0x0110)},
	{"CAM_PCLK",(PINOUT_CONTROL_BASE + 0x0112)},
	{"CAM_FLD",(PINOUT_CONTROL_BASE + 0x0114)},
	{"CAM_D0",(PINOUT_CONTROL_BASE + 0x0116)},
	{"CAM_D1",(PINOUT_CONTROL_BASE + 0x0118)},
	{"CAM_D2",(PINOUT_CONTROL_BASE + 0x011A)},
	{"CAM_D3",(PINOUT_CONTROL_BASE + 0x011C)},
	{"CAM_D4",(PINOUT_CONTROL_BASE + 0x011E)},
	{"CAM_D5",(PINOUT_CONTROL_BASE + 0x0120)},
	{"CAM_D6",(PINOUT_CONTROL_BASE + 0x0122)},
	{"CAM_D7",(PINOUT_CONTROL_BASE + 0x0124)},
	{"CAM_D8",(PINOUT_CONTROL_BASE + 0x0126)},
	{"CAM_D9",(PINOUT_CONTROL_BASE + 0x0128)},
	{"CAM_D10",(PINOUT_CONTROL_BASE + 0x012A)},
	{"CAM_D11",(PINOUT_CONTROL_BASE + 0x012C)},
	{"CAM_XCLKB",(PINOUT_CONTROL_BASE + 0x012E)},
	{"CAM_WEN",(PINOUT_CONTROL_BASE + 0x0130)},
	{"CAM_STROBE",(PINOUT_CONTROL_BASE + 0x0132)},
	{"CSI2_DX0",(PINOUT_CONTROL_BASE + 0x0134)},
	{"CSI2_DY0",(PINOUT_CONTROL_BASE + 0x0136)},
	{"CSI2_DX1",(PINOUT_CONTROL_BASE + 0x0138)},
	{"CSI2_DY1",(PINOUT_CONTROL_BASE + 0x013A)},
	{"McBSP2_FSX",(PINOUT_CONTROL_BASE + 0x013C)},
	{"McBSP2_CLKX",(PINOUT_CONTROL_BASE + 0x013E)},
	{"McBSP2_DR",(PINOUT_CONTROL_BASE + 0x0140)},
	{"McBSP2_DX",(PINOUT_CONTROL_BASE + 0x0142)},
	{"MMC1_CLK",(PINOUT_CONTROL_BASE + 0x0144)},
	{"MMC1_CMD",(PINOUT_CONTROL_BASE + 0x0146)},
	{"MMC1_DAT0",(PINOUT_CONTROL_BASE + 0x0148)},
	{"MMC1_DAT1",(PINOUT_CONTROL_BASE + 0x014A)},
	{"MMC1_DAT2",(PINOUT_CONTROL_BASE + 0x014C)},
	{"MMC1_DAT3",(PINOUT_CONTROL_BASE + 0x014E)},
	{"MMC1_DAT4",(PINOUT_CONTROL_BASE + 0x0150)},
	{"MMC1_DAT5",(PINOUT_CONTROL_BASE + 0x0152)},
	{"MMC1_DAT6",(PINOUT_CONTROL_BASE + 0x0154)},
	{"MMC1_DAT7",(PINOUT_CONTROL_BASE + 0x0156)},
	{"MMC2_CLK",(PINOUT_CONTROL_BASE + 0x0158)},
	{"MMC2_CMD",(PINOUT_CONTROL_BASE + 0x015A)},
	{"MMC2_DAT0",(PINOUT_CONTROL_BASE + 0x015C)},
	{"MMC2_DAT1",(PINOUT_CONTROL_BASE + 0x015E)},
	{"MMC2_DAT2",(PINOUT_CONTROL_BASE + 0x0160)},
	{"MMC2_DAT3",(PINOUT_CONTROL_BASE + 0x0162)},
	{"MMC2_DAT4",(PINOUT_CONTROL_BASE + 0x0164)},
	{"MMC2_DAT5",(PINOUT_CONTROL_BASE + 0x0166)},
	{"MMC2_DAT6",(PINOUT_CONTROL_BASE + 0x0168)},
	{"MMC2_DAT7",(PINOUT_CONTROL_BASE + 0x016A)},
	{"McBSP3_DX",(PINOUT_CONTROL_BASE + 0x016C)},
	{"McBSP3_DR",(PINOUT_CONTROL_BASE + 0x016E)},
	{"McBSP3_CLKX",(PINOUT_CONTROL_BASE + 0x0170)},
	{"McBSP3_FSX",(PINOUT_CONTROL_BASE + 0x0172)},
	{"UART2_CTS",(PINOUT_CONTROL_BASE + 0x0174)},
	{"UART2_RTS",(PINOUT_CONTROL_BASE + 0x0176)},
	{"UART2_TX",(PINOUT_CONTROL_BASE + 0x0178)},
	{"UART2_RX",(PINOUT_CONTROL_BASE + 0x017A)},
	{"UART1_TX",(PINOUT_CONTROL_BASE + 0x017C)},
	{"UART1_RTS",(PINOUT_CONTROL_BASE + 0x017E)},
	{"UART1_CTS",(PINOUT_CONTROL_BASE + 0x0180)},
	{"UART1_RX",(PINOUT_CONTROL_BASE + 0x0182)},
	{"McBSP4_CLKX",(PINOUT_CONTROL_BASE + 0x0184)},
	{"McBSP4_DR",(PINOUT_CONTROL_BASE + 0x0186)},
	{"McBSP4_DX",(PINOUT_CONTROL_BASE + 0x0188)},
	{"McBSP4_FSX",(PINOUT_CONTROL_BASE + 0x018A)},
	{"McBSP1_CLKR",(PINOUT_CONTROL_BASE + 0x018C)},
	{"McBSP1_FSR",(PINOUT_CONTROL_BASE + 0x018E)},
	{"McBSP1_DX",(PINOUT_CONTROL_BASE + 0x0190)},
	{"McBSP1_DR",(PINOUT_CONTROL_BASE + 0x0192)},
	{"McBSP_CLKS",(PINOUT_CONTROL_BASE + 0x0194)},
	{"McBSP1_FSX",(PINOUT_CONTROL_BASE + 0x0196)},
	{"McBSP1_CLKX",(PINOUT_CONTROL_BASE + 0x0198)},
	{"UART3_CTS_RCTX",(PINOUT_CONTROL_BASE + 0x019A)},
	{"UART3_RTS_SD",(PINOUT_CONTROL_BASE + 0x019C)},
	{"UART3_RX_IRRX",(PINOUT_CONTROL_BASE + 0x019E)},
	{"UART3_TX_IRTX",(PINOUT_CONTROL_BASE + 0x01A0)},
	{"HSUSB0_CLK",(PINOUT_CONTROL_BASE + 0x01A2)},
	{"HSUSB0_STP",(PINOUT_CONTROL_BASE + 0x01A4)},
	{"HSUSB0_DIR",(PINOUT_CONTROL_BASE + 0x01A6)},
	{"HSUSB0_NXT",(PINOUT_CONTROL_BASE + 0x01A8)},
	{"HSUSB0_DATA0",(PINOUT_CONTROL_BASE + 0x01AA)},
	{"HSUSB0_DATA1",(PINOUT_CONTROL_BASE + 0x01AC)},
	{"HSUSB0_DATA2",(PINOUT_CONTROL_BASE + 0x01AE)},
	{"HSUSB0_DATA3",(PINOUT_CONTROL_BASE + 0x01B0)},
	{"HSUSB0_DATA4",(PINOUT_CONTROL_BASE + 0x01B2)},
	{"HSUSB0_DATA5",(PINOUT_CONTROL_BASE + 0x01B4)},
	{"HSUSB0_DATA6",(PINOUT_CONTROL_BASE + 0x01B6)},
	{"HSUSB0_DATA7",(PINOUT_CONTROL_BASE + 0x01B8)},
	{"I2C1_SCL",(PINOUT_CONTROL_BASE + 0x01BA)},
	{"I2C1_SDA",(PINOUT_CONTROL_BASE + 0x01BC)},
	{"I2C2_SCL",(PINOUT_CONTROL_BASE + 0x01BE)},
	{"I2C2_SDA",(PINOUT_CONTROL_BASE + 0x01C0)},
	{"I2C3_SCL",(PINOUT_CONTROL_BASE + 0x01C2)},
	{"I2C3_SDA",(PINOUT_CONTROL_BASE + 0x01C4)},
	{"I2C4_SCL",(PINOUT_CONTROL_BASE + 0x0A00)},
	{"I2C4_SDA",(PINOUT_CONTROL_BASE + 0x0A02)},
	{"HDQ_SIO",(PINOUT_CONTROL_BASE + 0x01C6)},
	{"McSPI1_CLK",(PINOUT_CONTROL_BASE + 0x01C8)},
	{"McSPI1_SIMO",(PINOUT_CONTROL_BASE + 0x01CA)},
	{"McSPI1_SOMI",(PINOUT_CONTROL_BASE + 0x01CC)},
	{"McSPI1_CS0",(PINOUT_CONTROL_BASE + 0x01CE)},
	{"McSPI1_CS1",(PINOUT_CONTROL_BASE + 0x01D0)},
	{"McSPI1_CS2",(PINOUT_CONTROL_BASE + 0x01D2)},
	{"McSPI1_CS3",(PINOUT_CONTROL_BASE + 0x01D4)},
	{"McSPI2_CLK",(PINOUT_CONTROL_BASE + 0x01D6)},
	{"McSPI2_SIMO",(PINOUT_CONTROL_BASE + 0x01D8)},
	{"McSPI2_SOMI",(PINOUT_CONTROL_BASE + 0x01DA)},
	{"McSPI2_CS0",(PINOUT_CONTROL_BASE + 0x01DC)},
	{"McSPI2_CS1",(PINOUT_CONTROL_BASE + 0x01DE)},
	{"SYS_32K",(PINOUT_CONTROL_BASE + 0x0A04)},
	{"SYS_CLKREQ",(PINOUT_CONTROL_BASE + 0x0A06)},
	{"SYS_nIRQ",(PINOUT_CONTROL_BASE + 0x01E0)},
	{"SYS_BOOT0",(PINOUT_CONTROL_BASE + 0x0A0A)},
	{"SYS_BOOT1",(PINOUT_CONTROL_BASE + 0x0A0C)},
	{"SYS_BOOT2",(PINOUT_CONTROL_BASE + 0x0A0E)},
	{"SYS_BOOT3",(PINOUT_CONTROL_BASE + 0x0A10)},
	{"SYS_BOOT4",(PINOUT_CONTROL_BASE + 0x0A12)},
	{"SYS_BOOT5",(PINOUT_CONTROL_BASE + 0x0A14)},
	{"SYS_BOOT6",(PINOUT_CONTROL_BASE + 0x0A16)},
	{"SYS_OFF_MODE",(PINOUT_CONTROL_BASE + 0x0A18)},
	{"SYS_CLKOUT1",(PINOUT_CONTROL_BASE + 0x0A1A)},
	{"SYS_CLKOUT2",(PINOUT_CONTROL_BASE + 0x01E2)},
	{"JTAG_nTRST",(PINOUT_CONTROL_BASE + 0x0A1C)},
	{"JTAG_TCK",(PINOUT_CONTROL_BASE + 0x0A1E)},
	{"JTAG_TMS",(PINOUT_CONTROL_BASE + 0x0A20)},
	{"JTAG_TDI",(PINOUT_CONTROL_BASE + 0x0A22)},
	{"JTAG_EMU0",(PINOUT_CONTROL_BASE + 0x0A24)},
	{"JTAG_EMU1",(PINOUT_CONTROL_BASE + 0x0A26)},
	{"ETK_CLK",(PINOUT_CONTROL_BASE + 0x05D8)},
	{"ETK_CTL",(PINOUT_CONTROL_BASE + 0x05DA)},
	{"ETK_D0",(PINOUT_CONTROL_BASE + 0x05DC)},
	{"ETK_D1",(PINOUT_CONTROL_BASE + 0x05DE)},
	{"ETK_D2",(PINOUT_CONTROL_BASE + 0x05E0)},
	{"ETK_D3",(PINOUT_CONTROL_BASE + 0x05E2)},
	{"ETK_D4",(PINOUT_CONTROL_BASE + 0x05E4)},
	{"ETK_D5",(PINOUT_CONTROL_BASE + 0x05E6)},
	{"ETK_D6",(PINOUT_CONTROL_BASE + 0x05E8)},
	{"ETK_D7",(PINOUT_CONTROL_BASE + 0x05EA)},
	{"ETK_D8",(PINOUT_CONTROL_BASE + 0x05EC)},
	{"ETK_D9",(PINOUT_CONTROL_BASE + 0x05EE)},
	{"ETK_D10",(PINOUT_CONTROL_BASE + 0x05F0)},
	{"ETK_D11",(PINOUT_CONTROL_BASE + 0x05F2)},
	{"ETK_D12",(PINOUT_CONTROL_BASE + 0x05F4)},
	{"ETK_D13",(PINOUT_CONTROL_BASE + 0x05F6)},
	{"ETK_D14",(PINOUT_CONTROL_BASE + 0x05F8)},
	{"ETK_D15",(PINOUT_CONTROL_BASE + 0x05FA)},
	{"D2D_McAD0",(PINOUT_CONTROL_BASE + 0X01E4)},
	{"D2D_McAD1",(PINOUT_CONTROL_BASE + 0X01E6)},
	{"D2D_McAD2",(PINOUT_CONTROL_BASE + 0X01E8)},
	{"D2D_McAD3",(PINOUT_CONTROL_BASE + 0X01EA)},
	{"D2D_McAD4",(PINOUT_CONTROL_BASE + 0X01EC)},
	{"D2D_McAD5",(PINOUT_CONTROL_BASE + 0X01EE)},
	{"D2D_McAD6",(PINOUT_CONTROL_BASE + 0X01F0)},
	{"D2D_McAD7",(PINOUT_CONTROL_BASE + 0X01F2)},
	{"D2D_McAD8",(PINOUT_CONTROL_BASE + 0X01F4)},
	{"D2D_McAD9",(PINOUT_CONTROL_BASE + 0X01F6)},
	{"D2D_McAD10",(PINOUT_CONTROL_BASE + 0X01F8)},
	{"D2D_McAD11",(PINOUT_CONTROL_BASE + 0X01FA)},
	{"D2D_McAD12",(PINOUT_CONTROL_BASE + 0X01FC)},
	{"D2D_McAD13",(PINOUT_CONTROL_BASE + 0X01FE)},
	{"D2D_McAD14",(PINOUT_CONTROL_BASE + 0X0200)},
	{"D2D_McAD15",(PINOUT_CONTROL_BASE + 0X0202)},
	{"D2D_McAD16",(PINOUT_CONTROL_BASE + 0X0204)},
	{"D2D_McAD17",(PINOUT_CONTROL_BASE + 0X0206)},
	{"D2D_McAD18",(PINOUT_CONTROL_BASE + 0X0208)},
	{"D2D_McAD19",(PINOUT_CONTROL_BASE + 0X020A)},
	{"D2D_McAD20",(PINOUT_CONTROL_BASE + 0X020C)},
	{"D2D_McAD21",(PINOUT_CONTROL_BASE + 0X020E)},
	{"D2D_McAD22",(PINOUT_CONTROL_BASE + 0X0210)},
	{"D2D_McAD23",(PINOUT_CONTROL_BASE + 0X0212)},
	{"D2D_McAD24",(PINOUT_CONTROL_BASE + 0X0214)},
	{"D2D_McAD25",(PINOUT_CONTROL_BASE + 0X0216)},
	{"D2D_McAD26",(PINOUT_CONTROL_BASE + 0X0218)},
	{"D2D_McAD27",(PINOUT_CONTROL_BASE + 0X021A)},
	{"D2D_McAD28",(PINOUT_CONTROL_BASE + 0X021C)},
	{"D2D_McAD29",(PINOUT_CONTROL_BASE + 0X021E)},
	{"D2D_McAD30",(PINOUT_CONTROL_BASE + 0X0220)},
	{"D2D_McAD31",(PINOUT_CONTROL_BASE + 0X0222)},
	{"D2D_McAD32",(PINOUT_CONTROL_BASE + 0X0224)},
	{"D2D_McAD33",(PINOUT_CONTROL_BASE + 0X0226)},
	{"D2D_McAD34",(PINOUT_CONTROL_BASE + 0X0228)},
	{"D2D_McAD35",(PINOUT_CONTROL_BASE + 0X022A)},
	{"D2D_McAD36",(PINOUT_CONTROL_BASE + 0X022C)},
	{"D2D_CLK26MI",(PINOUT_CONTROL_BASE + 0X022E)},
	{"D2D_NRESPWRON",(PINOUT_CONTROL_BASE + 0X0230)},
	{"D2D_NRESWARM",(PINOUT_CONTROL_BASE + 0X0232)},
	{"D2D_ARM9NIRQ",(PINOUT_CONTROL_BASE + 0X0234)},
	{"D2D_UMA2P6FIQ",(PINOUT_CONTROL_BASE + 0X0236)},
	{"D2D_SPINT",(PINOUT_CONTROL_BASE + 0X0238)},
	{"D2D_FRINT",(PINOUT_CONTROL_BASE + 0X023A)},
	{"D2D_DMAREQ0",(PINOUT_CONTROL_BASE + 0X023C)},
	{"D2D_DMAREQ1",(PINOUT_CONTROL_BASE + 0X023E)},
	{"D2D_DMAREQ2",(PINOUT_CONTROL_BASE + 0X0240)},
	{"D2D_DMAREQ3",(PINOUT_CONTROL_BASE + 0X0242)},
	{"D2D_N3GTRST",(PINOUT_CONTROL_BASE + 0X0244)},
	{"D2D_N3GTDI",(PINOUT_CONTROL_BASE + 0X0246)},
	{"D2D_N3GTDO",(PINOUT_CONTROL_BASE + 0X0248)},
	{"D2D_N3GTMS",(PINOUT_CONTROL_BASE + 0X024A)},
	{"D2D_N3GTCK",(PINOUT_CONTROL_BASE + 0X024C)},
	{"D2D_N3GRTCK",(PINOUT_CONTROL_BASE + 0X024E)},
	{"D2D_MSTDBY",(PINOUT_CONTROL_BASE + 0X0250)},
	{"D2D_SWAKEUP",(PINOUT_CONTROL_BASE + 0X0A4C)},
	{"D2D_IDLEREQ",(PINOUT_CONTROL_BASE + 0X0252)},
	{"D2D_IDLEACK",(PINOUT_CONTROL_BASE + 0X0254)},
	{"D2D_MWRITE",(PINOUT_CONTROL_BASE + 0X0256)},
	{"D2D_SWRITE",(PINOUT_CONTROL_BASE + 0X0258)},
	{"D2D_MREAD",(PINOUT_CONTROL_BASE + 0X025A)},
	{"D2D_SREAD",(PINOUT_CONTROL_BASE + 0X025C)},
	{"D2D_MBUSFLAG",(PINOUT_CONTROL_BASE + 0X025E)},
	{"D2D_SBUSFLAG",(PINOUT_CONTROL_BASE + 0X0260)},
	{"SDRC_CKE0",(PINOUT_CONTROL_BASE + 0X0262)},
	{"SDRC_CKE1",(PINOUT_CONTROL_BASE + 0X0264)},
	{"BOOT_MODE0",(PINOUT_CONTROL_BASE + 0x0A0A)},
	{"BOOT_MODE1",(PINOUT_CONTROL_BASE + 0x0A0C)},
	{"BOOT_MODE2",(PINOUT_CONTROL_BASE + 0x0A0E)},
	{"BOOT_MODE3",(PINOUT_CONTROL_BASE + 0x0A10)},
};

/*
u32 _mod_(u32 n1, u32 n2)
{
    return n1 - (n1 / n2) * n2;
}
*/

static int pad_conf_get(void *data, u64 *val)
{
	u32 *option = data;
	int i;
	u16 value;
	*val = *option;

	for(i=0; i < PAD_CONF_SIZE; i++)
	{
		if(option == &pad_conf[i])
		{
			value = omap_readw(board_pad_conf[i].addr);
			printk("******** READ PAD CONF - %s(%x) -> 0x%x\n", board_pad_conf[i].name, 
				board_pad_conf[i].addr, value);
			printk("******** MUXMODE %x ", value & 0x7);
			if(value & (0x1<<8)) // INPUT ENABLE
			{
				if(value & (0x1<<3))
				{
					if(value & (0x1<<4))
						printk("INPUT_PU ");
					else
						printk("INPUT_PD ");
				}
				else
					printk("INPUT ");
			}
			else
				printk("OUTPUT ");

			if(value & (0x1<<9)) // OFF ENABLE
			{
				if((value & (0x1<<10)) && (value & (0x1<<12)))
					if(value & (0x1<<13))
						printk("OFF_INPUT_PU");
					else
						printk("OFF_INPUT_PD");
				else if(value & (0x1<<11))
					printk("OFF_OUT_HIGH");
				else
					printk("OFF_OUT_LOW");
			}
			printk("\n\n");
			break;
		}
	}
	return 0;
}

static int pad_conf_set(void *data, u64 val)
{
	u32 *option = data;
	int i;
	u16 w_val;
	u32 temp = val;
	*option = val;

	//printk("pad_conf_set: val = %x\n", temp);
	//w_val = (temp / 100) / 100;
	if(temp/10000 >= 0 && temp/10000 <= 7)
		w_val = (u16)(temp / 10000);
	else
		return 0;

	temp %= 10000;
	
	if(temp/1000 == 1)
	{
		temp %= 1000;
		w_val |= (1<<8); // INPUT ENABLE
		if(temp/100 == 1)
			w_val |= (1<<3) | (1<<4); // PULL ENABLE, PULL_UP
		else if(temp/100 == 0)
			w_val |= (1<<3); // PULL_ENABLE (PULL_DOWN)
	}
	temp %= 100;
	if(temp/10 == 1)
	{
		temp %= 10;
		w_val |= (1<<9) | (1<<10); // OFF_EN, OFF_INPUT_ENABLE
		if(temp == 1)
			w_val |= (1<<12) | (1<<13); // OFF_PULL_ENABLE, OFF_PULL_UP
		else if(temp == 0)
			w_val |= (1<<12); // OFF_PULL_ENABLE (OFF_PULL_DOWN)
	}
	else if(temp/10 == 0)
	{
		temp %= 10;
		w_val |= (1<<9); // OFF_EN
		if(temp == 1)
			w_val |= (1<11); // OFF_OUTPUT_VALUE
//		else if(temp == 0)

	}
	
	
	for(i=0; i < PAD_CONF_SIZE; i++)
	{
		if(option == &pad_conf[i])
		{
			omap_writew(w_val, board_pad_conf[i].addr);
			printk("******** WRITE PAD CONF - %s(%x) -> 0x%x\n", board_pad_conf[i].name,
				board_pad_conf[i].addr, omap_readw(board_pad_conf[i].addr));
			break;
		}
	}

	return 0;
}

DEFINE_SIMPLE_ATTRIBUTE(pm_dbg_pad_conf_fops, pad_conf_get, pad_conf_set, "%llu\n");