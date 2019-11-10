
#include "hct_common_config.h"
#include "mt6739-pinfunc.h"
/*************** lcm fhd/amoled *********************/
#define __HCT_GPIO_LCM_POWER_DM_PINMUX__	PINMUX_GPIO13__FUNC_GPIO13//1.8v ldo
#define __HCT_GPIO_LCM_POWER_DP_PINMUX__	PINMUX_GPIO12__FUNC_GPIO12 //2.8v ldo
#define __HCT_GPIO_LCM_POWER_DM_PIN__		13//1.8v ldo
#define __HCT_GPIO_LCM_POWER_DP_PIN__		12 //2.8v ldo
//reset
#define __HCT_GPIO_LCM_RST_PINMUX__   			PINMUX_GPIO83__FUNC_GPIO83
// +5v
#define __HCT_GPIO_LCM_POWER_ENN_PINMUX__   	PINMUX_GPIO91__FUNC_GPIO91
// -5v
#define __HCT_GPIO_LCM_POWER_ENP_PINMUX__   	PINMUX_GPIO90__FUNC_GPIO90
//KTD2151 I2C channel
#define __HCT_KTD2151_I2C_CHANNEL__ 3

/**************************SD CARD hotplug Related*********/
#if __HCT_SD_CARD_HOTPLUG_SUPPORT__
#define __HCT_MSDC_CD_EINT_NUM__  			5
#define __HCT_MSDC_CD_GPIO_PIN_NUM__  		5
#define __HCT_MSDC_CD_POLARITY_HIGH__  		HCT_YES
#endif

/**************************  Hall  Related*********/
#if __HCT_HALL_SUPPORT__
#define __HCT_HALL_EINT_PIN_NUM__           15
#define __HCT_KPD_SLIDE_EINT_PIN__          PINMUX_GPIO15__FUNC_GPIO15
#define __HCT_HALL_EINT_GPIO_NUM__          15
#endif

/**************************Camera Related*********/
#define __HCT_GPIO_CAMERA_LDO_EN_PINMUX__  PUNMUX_GPIO_NONE_FUNC_NONE

//-----------main camera
#define __HCT_GPIO_CAMERA_CMRST_PINMUX__ 	PINMUX_GPIO29__FUNC_GPIO29
#define __HCT_GPIO_CAMERA_CMPDN_PINMUX__ 	PINMUX_GPIO30__FUNC_GPIO30
//-----------sub camera
#define __HCT_GPIO_CAMERA_CMRST1_PINMUX__ 	PINMUX_GPIO22__FUNC_GPIO22
#define __HCT_GPIO_CAMERA_CMPDN1_PINMUX__ 	PINMUX_GPIO23__FUNC_GPIO23
//-----------main2 camera
#define __HCT_GPIO_CAMERA_MAIN2_CMRST_PINMUX__ PINMUX_GPIO25__FUNC_GPIO25
#if __HCT_TRUE_DUAL_FRONT_CAMER__
#define __HCT_GPIO_CAMERA_MAIN2_CMPDN_PINMUX__ PUNMUX_GPIO_NONE_FUNC_NONE
#else
#define __HCT_GPIO_CAMERA_MAIN2_CMPDN_PINMUX__ PINMUX_GPIO9__FUNC_GPIO9
#endif  //huwenchang modify for true sub2 camera,@20170905

/* zhouhongbin add start 2017.08.19 */
#define __HCT_GPIO_CAMERA_MAIN_FAKE_CMRST_PINMUX__ PINMUX_GPIO25__FUNC_GPIO25
#define __HCT_GPIO_CAMERA_MAIN_FAKE_CMPDN_PINMUX__ PINMUX_GPIO9__FUNC_GPIO9
/* add end */

#define __HCT_GPIO_CAMERA_MIPI_SEL_PINMUX__ PUNMUX_GPIO_NONE_FUNC_NONE
#define __HCT_GPIO_CAMERA_MIPI_EN_PINMUX__ PUNMUX_GPIO_NONE_FUNC_NONE

/**************************flashlight Related*********/
#ifdef CONFIG_MTK_FLASHLIGHT_AW3641
	#define __HCT_FLASHLIGHT_AW3641_EN_GPIO__     	26
	#define __HCT_FLASHLIGHT_AW3641_EN_PIN__     	PINMUX_GPIO26__FUNC_GPIO26
	#define __HCT_FLASHLIGHT_AW3641_MODE_PIN__     	PINMUX_GPIO28__FUNC_GPIO28
#endif

#ifdef CONFIG_MTK_FLASHLIGHT_SUB_GPIO
	#define __HCT_FLASHLIGHT_SUB_GPIO_EN_PIN__     	PINMUX_GPIO10__FUNC_GPIO10
#endif

/* hct_drv_add_main_flashlight begin */
#if defined(__HCT_TRUE_FALSE_FLASHLIGHT_SUPPORT__)
#if __HCT_TRUE_FALSE_FLASHLIGHT_SUPPORT__
	#define __HCT_FLASHLIGHT_MAIN_GPIO_EN_PIN__    	PINMUX_GPIO17__FUNC_GPIO17
#endif
#endif
/* hct_drv_add_main_flashlight end */

/**************************Audio EXMP Related*********/
#define __HCT_GPIO_EXTAMP_EN_PIN__     PINMUX_GPIO24__FUNC_GPIO24
#define __HCT_GPIO_EXTAMP2_EN_PIN__    PUNMUX_GPIO_NONE_FUNC_NONE



/**************************CTP Related****************/
#define __HCT_CTP_EINT_ENT_PINNUX__         PINMUX_GPIO6__FUNC_GPIO6
#define __HCT_CTP_EINT_EN_PIN_NUM__      	6

#define __HCT_CTP_RESET_PINNUX__          PINMUX_GPIO119__FUNC_GPIO119

#define __HCT_CTP_FT_ALL_SENSOR_ADDR__     0x38
#define __HCT_CTP_MSG5846_SENSOR_ADDR__    0x62

#ifndef __HCT_TOUCHSCREEN_SYNAPTICS_ADDR__ 
	#define __HCT_TOUCHSCREEN_SYNAPTICS_ADDR__ 0x70
#endif

/**************************RGB GPIO Related****************/
#if 0//__HCT_RED_LED_MODE__ == __HCT_MT65XX_LED_MODE_GPIO__
#define  __HCT_RGB_RED_GPIO_EN_PIN__ 		PINMUX_GPIO19__FUNC_GPIO19
#endif

#if __HCT_GREEN_LED_MODE__ == __HCT_MT65XX_LED_MODE_GPIO__
#define  __HCT_RGB_GREEN_GPIO_EN_PIN__ 		PINMUX_GPIO18__FUNC_GPIO18
#endif

#if __HCT_BLUE_LED_MODE__ == __HCT_MT65XX_LED_MODE_GPIO__
#define  __HCT_RGB_BLUE_GPIO_EN_PIN__ 		PINMUX_GPIO19__FUNC_GPIO19
#endif

#if __HCT_BUTTON_BACKLIGHT_LED_MODE__ == __HCT_MT65XX_LED_MODE_GPIO__
#define  __HCT_KPDLED_GPIO_EN_PIN__ 		PINMUX_GPIO27__FUNC_GPIO27
#endif

#ifndef __HCT_RED_LED_DATA__
#define __HCT_RED_LED_DATA__			__HCT_MT65XX_LED_PMIC_NLED_ISINK1__
#endif
#ifndef __HCT_GREEN_LED_DATA__
#define __HCT_GREEN_LED_DATA__			__HCT_MT65XX_LED_MODE_GPIO_G__
#endif
#ifndef __HCT_BLUE_LED_DATA__
#define __HCT_BLUE_LED_DATA__			__HCT_MT65XX_LED_MODE_GPIO_B__
#endif
#ifndef __HCT_BUTTON_LED_DATA__
#define __HCT_BUTTON_LED_DATA__			__HCT_MT65XX_LED_MODE_GPIO_KPD__
#endif
/**************************Accdet Related****************/

#define __HCT_ACCDET_EINT_PIN__     	PINMUX_GPIO11__FUNC_GPIO11
#define __HCT_ACCDET_EINT_PIN_NUM__     11

/**************************Gsensor Related****************/
/* Gsensor releated*/
/*Step1: define this macro*/
/*Step2: need define dws int tab with the right bus num*/
#define __HCT_GSENSOR_I2C_BUS_NUM__       	1

#define __HCT__KXTJ2_SENSOR_ADDR__     0x40
#define __HCT__KXTJ2_SENSOR_DIRECTION__     5
#define __HCT__KXTJ2_SENSOR_BATCH_SUPPORT__     0

#define __HCT__MXC400X_SENSOR_ADDR__	0x15
#define __HCT__MXC400X_SENSOR_DIRECTION__	2
#define __HCT__MXC400X_SENSOR_BATCH_SUPPORT__ 0

#define __HCT__BMA156_NEW_SENSOR_ADDR__			0x10
#define __HCT__BMA156_NEW_SENSOR_DIRECTION__		1
#define __HCT__BMA156_NEW_SENSOR_BATCH_SUPPORT__ 	0

#ifdef CONFIG_MTK_BMI160_ACC
#define __HCT__BMI160_ACC_SENSOR_ADDR__			0x68
#define __HCT__BMI160_ACC_SENSOR_DIRECTION__		6
#define __HCT__BMI160_ACC_SENSOR_BATCH_SUPPORT__ 	0
#endif


/**************************Gyro sensor Related****************/
#define __HCT_GYRO_I2C_BUS_NUM__       1
#define __HCT__BMG160_NEW_SENSOR_ADDR__     0x68
#define __HCT__BMG160_NEW_SENSOR_DIRECTION__		0


#ifdef CONFIG_MTK_BMI160_GYRO
#define __HCT__BMI160_GYRO_SENSOR_ADDR__     0x66
#define __HCT__BMI160_GYRO_SENSOR_DIRECTION__		6
#endif

/**************************ALSPS Related****************/
/*Step1: define this macro*/
/*Step2: need define dws int tab with the right bus num*/
#define __HCT_ALSPS_I2C_BUS_NUM__               1
#define __HCT_STK3X1X_SENSOR_ADDR__			0x48
#define __HCT_HCT_STK3X1X_PS_THRELD_HIGH__		1700
#define __HCT_HCT_STK3X1X_PS_THRELD_LOW__		1500
/*EPL259X Sensor Customize ----start*****/
/*EPL259X Sensor I2C addr*/
#define __HCT_EPL259X_SENSOR_ADDR__            0x49
#define __HCT_EPL2182_SENSOR_ADDR__            0x49
#define __HCT_EM3071X_SENSOR_ADDR__            0x24
#define __HCT_PA22A00001_S2_SENSOR_ADDR__	0x1E

#define __HCT_ALSPS_EINT_PINMUX__                  PINMUX_GPIO1__FUNC_GPIO1
#define __HCT_ALSPS_EINT_PIN_NUM__              1
/**************************msensor sensor Related****************/
#define __HCT_MSENSOR_I2C_BUS_NUM__       	1

#define __HCT__BMM156_NEW_SENSOR_ADDR__			0x12
#define __HCT__BMM156_NEW_SENSOR_DIRECTION__		1
#define __HCT__BMM156_NEW_SENSOR_BATCH_SUPPORT__ 	0

#define __HCT_QMC7983_SENSOR_ADDR__			0x2C
#define __HCT_QMC7983_SENSOR_DIRECTION__		3	

/**************************GPS LNA Related****************/
#define __HCT_GPS_LNA_EN_PINMUX__     			PINMUX_GPIO118__FUNC_GPIO118

/**************************USB OTG Related****************/
#if __HCT_USB_MTK_OTG_SUPPORT__
	#define __HCT_USB_VBUS_EN_PIN__     			96
#endif

/**************************Usb type C Related****************/
#define __HCT_TYPEC_ACCDET_MIC_SWITCH_GPIO_NUM__     96

#if __HCT_TYPEC_PI5USB_SUPPORT__
#define __HCT_TYPEC_PI5USB_I2C_BUS_NUM__       			1
#define __HCT_TYPEC_PI5USB_ADDR__             			0x1d
/*EINT*/
#define __HCT_TYPEC_EINT_PIN_NUM__				111
#define __HCT_TYPEC_EINT_PIN__          			PINMUX_GPIO111__FUNC_GPIO111
/*USB ID as EINT*/
#define __HCT_TYPEC_USBID_EINT_PIN_NUM__			16
#define __HCT_TYPEC_USB_ID_GPIO_NUM__				16
#define __HCT_TYPEC_USB_ID_PIN__          			PINMUX_GPIO16__FUNC_GPIO16
#endif

/**************************FINGERPRINT SUPPORT****************/
#ifdef CONFIG_HCT_FINGERPRINT_SUPPORT
#define __HCT_FINGERPRINT_EINT_EN_PIN_NUM__	8
#define __HCT_FINGERPRINT_EINT_PIN__	PINMUX_GPIO8__FUNC_GPIO8
#define __HCT_FINGERPRINT_POWER_PIN__	PINMUX_GPIO94__FUNC_GPIO94
#define __HCT_FINGERPRINT_RESET_PIN__	PINMUX_GPIO95__FUNC_GPIO95
#define __HCT_FINGERPRINT_RESET_PIN_NUM__	95
#endif



//////////*****************customise end******************//////////
#include "hct_custom_config.h"

