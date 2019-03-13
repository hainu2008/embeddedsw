
/*******************************************************************
*
* CAUTION: This file is automatically generated by HSI.
* Version: 2018.3
* DO NOT EDIT.
*
* Copyright (C) 2010-2019 Xilinx, Inc. All Rights Reserved.*
*Permission is hereby granted, free of charge, to any person obtaining a copy
*of this software and associated documentation files (the Software), to deal
*in the Software without restriction, including without limitation the rights
*to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*copies of the Software, and to permit persons to whom the Software is
*furnished to do so, subject to the following conditions:
*
*The above copyright notice and this permission notice shall be included in
*all copies or substantial portions of the Software.
* 
*THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL 
*XILINX BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT
*OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
*Except as contained in this notice, the name of the Xilinx shall not be used
*in advertising or otherwise to promote the sale, use or other dealings in
*this Software without prior written authorization from Xilinx.
*

* 
* Description: Driver configuration
*
*******************************************************************/

#include "xparameters.h"
#include "xhdmiphy1.h"

/*
* The configuration table for devices
*/

XHdmiphy1_Config XHdmiphy1_ConfigTable[XPAR_XHDMIPHY1_NUM_INSTANCES] =
{
	{
		XPAR_V_HDMI_PHY_DEVICE_ID,
		XPAR_V_HDMI_PHY_BASEADDR,
		(XHdmiphy1_GtType)XPAR_V_HDMI_PHY_TRANSCEIVER,
		XPAR_V_HDMI_PHY_TX_NO_OF_CHANNELS,
		XPAR_V_HDMI_PHY_RX_NO_OF_CHANNELS,
		(XHdmiphy1_ProtocolType)XPAR_V_HDMI_PHY_TX_PROTOCOL,
		(XHdmiphy1_ProtocolType)XPAR_V_HDMI_PHY_RX_PROTOCOL,
		(XHdmiphy1_PllRefClkSelType)XPAR_V_HDMI_PHY_TX_REFCLK_SEL,
		(XHdmiphy1_PllRefClkSelType)XPAR_V_HDMI_PHY_RX_REFCLK_SEL,
		(XHdmiphy1_PllRefClkSelType)XPAR_V_HDMI_PHY_TX_FRL_REFCLK_SEL,
		(XHdmiphy1_PllRefClkSelType)XPAR_V_HDMI_PHY_RX_FRL_REFCLK_SEL,
		(XHdmiphy1_SysClkDataSelType)XPAR_V_HDMI_PHY_TX_PLL_SELECTION,
		(XHdmiphy1_SysClkDataSelType)XPAR_V_HDMI_PHY_RX_PLL_SELECTION,
		XPAR_V_HDMI_PHY_NIDRU,
		(XHdmiphy1_PllRefClkSelType)XPAR_V_HDMI_PHY_NIDRU_REFCLK_SEL,
		(XVidC_PixelsPerClock)XPAR_V_HDMI_PHY_INPUT_PIXELS_PER_CLOCK,
		XPAR_V_HDMI_PHY_TX_BUFFER_BYPASS,
		XPAR_V_HDMI_PHY_HDMI_FAST_SWITCH,
		XPAR_V_HDMI_PHY_TRANSCEIVER_WIDTH,
		XPAR_V_HDMI_PHY_ERR_IRQ_EN,
		XPAR_V_HDMI_PHY_AXI_LITE_FREQ_HZ,
		XPAR_V_HDMI_PHY_DRPCLK_FREQ,
		XPAR_V_HDMI_PHY_USE_GT_CH4_HDMI
	}
};
