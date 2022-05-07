################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../device/system_LPC55S69_cm33_core0.c 

OBJS += \
./device/system_LPC55S69_cm33_core0.o 

C_DEPS += \
./device/system_LPC55S69_cm33_core0.d 


# Each subdirectory must supply rules for building sources it contributes
device/%.o: ../device/%.c device/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DMCUXPRESSO_SDK -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__REDLIB__ -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\utilities" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\drivers" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\component\uart" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\component\lists" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\CMSIS" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\CMSIS_driver" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\board" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\device" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\board" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\source" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\utilities" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\drivers" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\device" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\startup" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\component\uart" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\component\lists" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\CMSIS" -O0 -fno-common -g3 -mcpu=cortex-m33 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


