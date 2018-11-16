/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   lte_custom_rf_tas_tst_config.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177L FDD/TDD ANT
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/


/* ------------------------------------------------------------------------- */
#include "lte_custom_rf_tas_tst_config.h"
#include "lte_custom_rf_tas.h"
#include "el1d_rf_custom_data.h"


LTE_RF_TAS_TST_CONFIG_DATABASE_T LTE_TAS_TST_CONFIG_DATABASE_Set2 =
{
   LTE_TAS_TST_CONFIG_EN(Set2),
   {
      /*Index  0*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR0  , Set2) ,
      /*Index  1*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR1  , Set2) ,
      /*Index  2*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR2  , Set2) ,
      /*Index  3*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR3  , Set2) ,
      /*Index  4*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR4  , Set2) ,
      /*Index  5*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR5  , Set2) ,
      /*Index  6*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR6  , Set2) ,
      /*Index  7*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR7  , Set2) ,
      /*Index  8*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR8  , Set2) ,
      /*Index  9*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR9  , Set2) ,
      /*Index 10*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR10 , Set2) ,
      /*Index 11*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR11 , Set2) ,
      /*Index 12*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR12 , Set2) ,
      /*Index 13*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR13 , Set2) ,
      /*Index 14*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR14 , Set2) ,
      /*Index 15*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR15 , Set2) ,
      /*Index 16*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR16 , Set2) ,
      /*Index 17*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR17 , Set2) ,
      /*Index 18*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR18 , Set2) ,
      /*Index 19*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR19 , Set2) ,
      /*Index 20*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR20 , Set2) ,
      /*Index 21*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR21 , Set2) ,
      /*Index 22*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR22 , Set2) ,
      /*Index 23*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR23 , Set2) ,
      /*Index 24*/ LTE_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR24 , Set2) ,
   }
};

LTE_RF_TAS_TST_CONFIG_GROUP_DATABASE_T LTE_TAS_TST_STATE_GROUP_Set2 = 
{
   {
      /*GROUP0*/ LTE_TAS_TST_STATE_CONFIGURE( LTE_TAS_TST_GROUP0, Set2),
      /*GROUP1*/ LTE_TAS_TST_STATE_CONFIGURE( LTE_TAS_TST_GROUP1, Set2),
      /*GROUP2*/ LTE_TAS_TST_STATE_CONFIGURE( LTE_TAS_TST_GROUP2, Set2),
      /*GROUP3*/ LTE_TAS_TST_STATE_CONFIGURE( LTE_TAS_TST_GROUP3, Set2),
      /*GROUP4*/ LTE_TAS_TST_STATE_CONFIGURE( LTE_TAS_TST_GROUP4, Set2),
   }
};

/* ------------------------------------------------------------------------- */

