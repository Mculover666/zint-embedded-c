/*  zintconfig.h - the configured options and settings for libzint

    libzint - the open source barcode library
    Copyright (C) 2021 Robin Stuart <rstuart114@gmail.com>

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

    1. Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
    3. Neither the name of the project nor the names of its contributors
       may be used to endorse or promote products derived from this software
       without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
    ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
    FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
    DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
    OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
    HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
    LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
    OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
    SUCH DAMAGE.
 */
/* vim: set ts=4 sw=4 et : */

#ifndef ZINTCONFIG_H
#define ZINTCONFIG_H

#define ZINT_VERSION_MAJOR      2
#define ZINT_VERSION_MINOR      10
#define ZINT_VERSION_RELEASE    0
#define ZINT_VERSION_BUILD      9

/* Symbologies (`symbol->symbology`) */
/* Tbarcode 7 codes */
#define BARCODE_CODE11_ENABLE          1   /* Code 11 */
#define BARCODE_C25STANDARD_ENABLE     1   /* 2 of 5 Standard (Matrix) */
#define BARCODE_C25MATRIX_ENABLE       1   /* Legacy */
#define BARCODE_C25INTER_ENABLE        1   /* 2 of 5 Interleaved */
#define BARCODE_C25IATA_ENABLE         1   /* 2 of 5 IATA */
#define BARCODE_C25LOGIC_ENABLE        1   /* 2 of 5 Data Logic */
#define BARCODE_C25IND_ENABLE          1   /* 2 of 5 Industrial */
#define BARCODE_CODE39_ENABLE          1   /* Code 39 */
#define BARCODE_EXCODE39_ENABLE        1   /* Extended Code 39 */
#define BARCODE_EANX_CHK_ENABLE        1   /* EAN + Check Digit */
#define BARCODE_GS1_128_ENABLE         1   /* GS1-128 */
#define BARCODE_EAN128_ENABLE          1   /* Legacy */
#define BARCODE_CODABAR_ENABLE         1   /* Codabar */
#define BARCODE_CODE128_ENABLE         1   /* Code 128 */
#define BARCODE_DPLEIT_ENABLE          1   /* Deutsche Post Leitcode */
#define BARCODE_DPIDENT_ENABLE         1   /* Deutsche Post Identcode */
#define BARCODE_CODE16K_ENABLE         1   /* Code 16k */
#define BARCODE_CODE49_ENABLE          1   /* Code 49 */
#define BARCODE_CODE93_ENABLE          1   /* Code 93 */
#define BARCODE_FLAT_ENABLE            1   /* Flattermarken */
#define BARCODE_DBAR_OMN_ENABLE        1   /* GS1 DataBar Omnidirectional */
#define BARCODE_RSS14_ENABLE           1   /* Legacy */
#define BARCODE_DBAR_LTD_ENABLE        1   /* GS1 DataBar Limited */
#define BARCODE_RSS_LTD_ENABLE         1   /* Legacy */
#define BARCODE_DBAR_EXP_ENABLE        1   /* GS1 DataBar Expanded */
#define BARCODE_RSS_EXP_ENABLE         1   /* Legacy */
#define BARCODE_TELEPEN_ENABLE         1   /* Telepen Alpha */
#define BARCODE_UPCA_ENABLE            1   /* UPC-A */
#define BARCODE_UPCA_CHK_ENABLE        1   /* UPC-A + Check Digit */
#define BARCODE_UPCE_ENABLE            1   /* UPC-E */
#define BARCODE_UPCE_CHK_ENABLE        1   /* UPC-E + Check Digit */
#define BARCODE_POSTNET_ENABLE         1   /* USPS POSTNET */
#define BARCODE_MSI_PLESSEY_ENABLE     1   /* MSI Plessey */
#define BARCODE_FIM_ENABLE             1   /* Facing Identification Mark */
#define BARCODE_LOGMARS_ENABLE         1   /* LOGMARS */
#define BARCODE_PHARMA_ENABLE          1   /* Pharmacode One-Track */
#define BARCODE_PZN_ENABLE             1   /* Pharmazentralnummer */
#define BARCODE_PHARMA_TWO_ENABLE      1   /* Pharmacode Two-Track */
#define BARCODE_PDF417_ENABLE          1   /* PDF417 */
#define BARCODE_PDF417COMP_ENABLE      1   /* Compact PDF417 (Truncated PDF417) */
#define BARCODE_PDF417TRUNC_ENABLE     1   /* Legacy */
#define BARCODE_MAXICODE_ENABLE        1   /* MaxiCode */
#define BARCODE_QRCODE_ENABLE          1   /* QR Code */
#define BARCODE_CODE128B_ENABLE        1   /* Code 128 (Subset B) */
#define BARCODE_AUSPOST_ENABLE         1   /* Australia Post Standard Customer */
#define BARCODE_AUSREPLY_ENABLE        1   /* Australia Post Reply Paid */
#define BARCODE_AUSROUTE_ENABLE        1   /* Australia Post Routing */
#define BARCODE_AUSREDIRECT_ENABLE     1   /* Australia Post Redirection */
#define BARCODE_ISBNX_ENABLE           1   /* ISBN */
#define BARCODE_RM4SCC_ENABLE          1   /* Royal Mail 4 State */
#define BARCODE_DATAMATRIX_ENABLE      1   /* Data Matrix (ECC200) */
#define BARCODE_EAN14_ENABLE           1   /* EAN-14 */
#define BARCODE_VIN_ENABLE             1   /* Vehicle Identification Number */
#define BARCODE_CODABLOCKF_ENABLE      1   /* Codablock-F */
#define BARCODE_NVE18_ENABLE           1   /* NVE-18 (SSCC-18) */
#define BARCODE_JAPANPOST_ENABLE       1   /* Japanese Postal Code */
#define BARCODE_KOREAPOST_ENABLE       1   /* Korea Post */
#define BARCODE_DBAR_STK_ENABLE        1   /* GS1 DataBar Stacked */
#define BARCODE_RSS14STACK_ENABLE      1   /* Legacy */
#define BARCODE_DBAR_OMNSTK_ENABLE     1   /* GS1 DataBar Stacked Omnidirectional */
#define BARCODE_RSS14STACK_OMNI_ENABLE 1   /* Legacy */
#define BARCODE_DBAR_EXPSTK_ENABLE     1   /* GS1 DataBar Expanded Stacked */
#define BARCODE_RSS_EXPSTACK_ENABLE    1   /* Legacy */
#define BARCODE_PLANET_ENABLE          1   /* USPS PLANET */
#define BARCODE_MICROPDF417_ENABLE     1   /* MicroPDF417 */
#define BARCODE_USPS_IMAIL_ENABLE      1   /* USPS Intelligent Mail (OneCode) */
#define BARCODE_ONECODE_ENABLE         1   /* Legacy */
#define BARCODE_PLESSEY_ENABLE         1   /* Plessey Code */

/* Tbarcode 8 codes */
#define BARCODE_TELEPEN_NUM_ENABLE     1   /* Telepen Numeric */
#define BARCODE_ITF14_ENABLE           1   /* ITF-14 */
#define BARCODE_KIX_ENABLE             1   /* Dutch Post KIX Code */
#define BARCODE_AZTEC_ENABLE           1   /* Aztec Code */
#define BARCODE_DAFT_ENABLE            1   /* DAFT Code */
#define BARCODE_DPD_ENABLE             1   /* DPD Code */
#define BARCODE_MICROQR_ENABLE         1   /* Micro QR Code */

/* Tbarcode 9 codes */
#define BARCODE_HIBC_128_ENABLE        1   /* HIBC Code 128 */
#define BARCODE_HIBC_39_ENABLE         1   /* HIBC Code 39 */
#define BARCODE_HIBC_DM_ENABLE         1   /* HIBC Data Matrix */
#define BARCODE_HIBC_QR_ENABLE         1   /* HIBC QR Code */
#define BARCODE_HIBC_PDF_ENABLE        1   /* HIBC PDF417 */
#define BARCODE_HIBC_MICPDF_ENABLE     1   /* HIBC MicroPDF417 */
#define BARCODE_HIBC_BLOCKF_ENABLE     1   /* HIBC Codablock-F */
#define BARCODE_HIBC_AZTEC_ENABLE      1   /* HIBC Aztec Code */

/* Tbarcode 10 codes */
#define BARCODE_DOTCODE_ENABLE         1   /* DotCode */
#define BARCODE_HANXIN_ENABLE          1   /* Han Xin (Chinese Sensible) Code */

/* Tbarcode 11 codes */
#define BARCODE_MAILMARK_ENABLE        1   /* Royal Mail 4-state Mailmark */

/* Zint specific */
#define BARCODE_AZRUNE_ENABLE          1   /* Aztec Runes */
#define BARCODE_CODE32_ENABLE          1   /* Code 32 */
#define BARCODE_EANX_CC_ENABLE         1   /* EAN Composite */
#define BARCODE_GS1_128_CC_ENABLE      1   /* GS1-128 Composite */
#define BARCODE_EAN128_CC_ENABLE       1   /* Legacy */
#define BARCODE_DBAR_OMN_CC_ENABLE     1   /* GS1 DataBar Omnidirectional Composite */
#define BARCODE_RSS14_CC_ENABLE        1   /* Legacy */
#define BARCODE_DBAR_LTD_CC_ENABLE     1   /* GS1 DataBar Limited Composite */
#define BARCODE_RSS_LTD_CC_ENABLE      1   /* Legacy */
#define BARCODE_DBAR_EXP_CC_ENABLE     1   /* GS1 DataBar Expanded Composite */
#define BARCODE_RSS_EXP_CC_ENABLE      1   /* Legacy */
#define BARCODE_UPCA_CC_ENABLE         1   /* UPC-A Composite */
#define BARCODE_UPCE_CC_ENABLE         1   /* UPC-E Composite */
#define BARCODE_DBAR_STK_CC_ENABLE     1   /* GS1 DataBar Stacked Composite */
#define BARCODE_RSS14STACK_CC_ENABLE   1   /* Legacy */
#define BARCODE_DBAR_OMNSTK_CC_ENABLE  1   /* GS1 DataBar Stacked Omnidirectional Composite */
#define BARCODE_RSS14_OMNI_CC_ENABLE   1   /* Legacy */
#define BARCODE_DBAR_EXPSTK_CC_ENABLE  1   /* GS1 DataBar Expanded Stacked Composite */
#define BARCODE_RSS_EXPSTACK_CC_ENABLE 1   /* Legacy */
#define BARCODE_CHANNEL_ENABLE         1   /* Channel Code */
#define BARCODE_CODEONE_ENABLE         1   /* Code One */
#define BARCODE_GRIDMATRIX_ENABLE      1   /* Grid Matrix */
#define BARCODE_UPNQR_ENABLE           1   /* UPNQR (Univerzalnega Plačilnega Naloga QR) */
#define BARCODE_ULTRA_ENABLE           1   /* Ultracode */
#define BARCODE_RMQR_ENABLE            1   /* Rectangular Micro QR Code (rMQR) */

/* Input data types (`symbol->input_mode`) */
#define DATA_MODE_ENABLE               1   /* Binary */
#define UNICODE_MODE_ENABLE            1   /* UTF-8 */
#define GS1_MODE_ENABLE                1   /* GS1 */

#endif /* ZINTCONFIG_H */
