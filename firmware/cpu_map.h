#ifdef CPU_MAP_MPCNC_V1P1
	// This is the CPU Map for the Buildlog.net MPCNC controller
	
		#define CPU_MAP_NAME "CPU_MAP_MPCNC_V1P1"
	
		// switch to the correct default settings
		#ifdef DEFAULTS_GENERIC
			#undef DEFAULTS_GENERIC
		#endif
		#define DEFAULTS_MPCNC
		
	
		#define USE_GANGED_AXES // allow two motors on an axis 
	  
		#define X_STEP_PIN      GPIO_NUM_12
		#define X_STEP_B_PIN    GPIO_NUM_22	 // ganged motor
		#define X_AXIS_SQUARING
		
		#define Y_STEP_PIN      GPIO_NUM_14
		#define Y_STEP_B_PIN    GPIO_NUM_21  // ganged motor
		#define Y_AXIS_SQUARING
		
		#define Z_STEP_PIN      GPIO_NUM_27
		
		#define X_DIRECTION_PIN   GPIO_NUM_26
		#define Y_DIRECTION_PIN   GPIO_NUM_25  
		#define Z_DIRECTION_PIN   GPIO_NUM_33 
		
		// OK to comment out to use pin for other features
		#define STEPPERS_DISABLE_PIN GPIO_NUM_13		
		
				
		// Note: if you use PWM rather than relay, you could map GPIO_NUM_17 to mist or flood 
		#define USE_SPINDLE_RELAY
		
		#ifdef USE_SPINDLE_RELAY		
			#define SPINDLE_PWM_PIN    GPIO_NUM_17
		#else
			#define SPINDLE_PWM_PIN    GPIO_NUM_16
			#define SPINDLE_ENABLE_PIN	GPIO_NUM_32
		#endif
		
		#define SPINDLE_PWM_CHANNEL 0
		// PWM Generator is based on 80,000,000 Hz counter
		// Therefor the freq determines the resolution
		// 80,000,000 / freq = max resolution
		// For 5000 that is 80,000,000 / 5000 = 16000 
		// round down to nearest bit count for SPINDLE_PWM_MAX_VALUE = 13bits (8192)
		#define SPINDLE_PWM_BASE_FREQ 5000 // Hz
		#define SPINDLE_PWM_BIT_PRECISION 8   // be sure to match this with SPINDLE_PWM_MAX_VALUE
		#define SPINDLE_PWM_OFF_VALUE     0
		#define SPINDLE_PWM_MAX_VALUE     255 // (2^SPINDLE_PWM_BIT_PRECISION)
		
		#ifndef SPINDLE_PWM_MIN_VALUE
				#define SPINDLE_PWM_MIN_VALUE   1   // Must be greater than zero.
		#endif
		
		#define SPINDLE_PWM_RANGE         (SPINDLE_PWM_MAX_VALUE-SPINDLE_PWM_MIN_VALUE)		
		
		// Note: Only uncomment this if USE_SPINDLE_RELAY is commented out.
		// Relay can be used for Spindle or Coolant
		//#define COOLANT_FLOOD_PIN 	GPIO_NUM_17
		
		#define X_LIMIT_PIN      	GPIO_NUM_34 
		#define Y_LIMIT_PIN      	GPIO_NUM_4  
		#define Z_LIMIT_PIN     	GPIO_NUM_15 	
		#define LIMIT_MASK      	B111
		
		#define PROBE_PIN       	GPIO_NUM_35  
		
		// The default value in config.h is wrong for this controller
		#ifdef INVERT_CONTROL_PIN_MASK
			#undef INVERT_CONTROL_PIN_MASK			
		#endif
		
		#define INVERT_CONTROL_PIN_MASK   B1100
		
		// Note: check the #define IGNORE_CONTROL_PINS is the way you want in config.h
		//#define CONTROL_RESET_PIN         GPIO_NUM_34  // needs external pullup
		#define CONTROL_FEED_HOLD_PIN     GPIO_NUM_36  // needs external pullup 
		#define CONTROL_CYCLE_START_PIN   GPIO_NUM_39  // needs external pullup    		
		
#endif