#ifndef __HCT_CUSTOM_CONFIG_H__
#define __HCT_CUSTOM_CONFIG_H__

/*
      ====================================THIS IS custom CONFIG ==========================================
*/
#define __HCT_SD_CARD_HOTPLUG_SUPPORT__  HCT_NO
#define __HCT_SIM_HOTPLUG_SUPPORT__  	 HCT_NO


#define __HCT_EPL259X_PS_THRELD_LOW__     1000
#define __HCT_EPL259X_PS_THRELD_HIGH__     1100

#define __HCT_EPL2182_PS_THRELD_HIGH__     1000
#define __HCT_EPL2182_PS_THRELD_LOW__     900

#define __HCT_EM3071X_ALSPSSENSOR_SUPPORT__	HCT_YES
#define __HCT_EM3071X_PS_THRELD_HIGH__		1000
#define __HCT_EM3071X_PS_THRELD_LOW__		900

#define __HCT_PA22A00001_S2_PS_THRELD_HIGH__	1000
#define __HCT_PA22A00001_S2_PS_THRELD_LOW__	900

#define __HCT_TYPEC_PI5USB_SUPPORT__		HCT_NO
#define __HCT_TYPEC_ACCDET_MIC_SUPPORT__	HCT_NO
#define __HCT_TP_GESTURE_SUPPORT__   HCT_NO

#define __HCT_HALL_SUPPORT__ HCT_YES

#define __HCT_SUB_FLASHLIGHT_SUPPORT__   HCT_NO
/*############### tpd button key releated config #####################*/
   /*this macro define tp button key y value, if we defined, we use this value,
     if we no define this value , we use default value  2000 */
#define TPD_BUTTON_Y_HIGHT        2000
#define __HCT_MTK_KTD2151__ HCT_YES

#define __HCT_POWER_SOURCE_CUST_EN__	HCT_YES
#define __HCT_FTS_POWER_NOT_SUSPENG__	HCT_YES
////////////////GT9XX _TP CONFIG ///////////////////////////////////

#define __HCT_CONFIG_HCT_GTP_HALL_CFG__   HCT_NO
#define __HCT_GTP_DRIVER_SEND_CFG__  HCT_NO

#if __HCT_GTP_DRIVER_SEND_CFG__
#define __HCT_CTP_CFG_GROUP0__ {\
}

#endif

#if __HCT_CONFIG_HCT_GTP_HALL_CFG__

#define __HCT_CTP_CFG_GROUP1_HALLCLOSE__{\
}

#endif

/*############### led releated config #####################*/
/***mode type defined in hct_common_dts_config.h****/
#define __HCT_RED_LED_MODE__                   __HCT_MT65XX_LED_MODE_PMIC__
#define __HCT_GREEN_LED_MODE__                 __HCT_MT65XX_LED_MODE_GPIO__
#define __HCT_BLUE_LED_MODE__                  __HCT_MT65XX_LED_MODE_GPIO__
#define __HCT_JOGBALL_BACKLIGHT_LED_MODE__     __HCT_MT65XX_LED_MODE_NONE__
#define __HCT_KEYBOARD_BACKLIGHT_LED_MODE__    __HCT_MT65XX_LED_MODE_NONE__
#define __HCT_BUTTON_BACKLIGHT_LED_MODE__      __HCT_MT65XX_LED_MODE_NONE__
#define __HCT_LCD_BACKLIGHT_LED_MODE__         __HCT_MT65XX_LED_MODE_CUST_BLS_PWM__

/*###############battery power config #####################*/
/*****
Note: this value can be  4400, 4350, 4200
******/
#define __HCT_BAT_LOW_TEMP_PROTECT_ENABLE__
#define __HCT_MAX_CHARGE_TEMPERATURE__ 55
#define __HCT_MIN_CHARGE_TEMPERATURE__ -9


#endif



