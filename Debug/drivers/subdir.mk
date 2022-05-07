################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_common_arm.c \
../drivers/fsl_dma.c \
../drivers/fsl_flexcomm.c \
../drivers/fsl_gpio.c \
../drivers/fsl_power.c \
../drivers/fsl_reset.c \
../drivers/fsl_usart.c \
../drivers/fsl_usart_cmsis.c \
../drivers/fsl_usart_dma.c 

OBJS += \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_common_arm.o \
./drivers/fsl_dma.o \
./drivers/fsl_flexcomm.o \
./drivers/fsl_gpio.o \
./drivers/fsl_power.o \
./drivers/fsl_reset.o \
./drivers/fsl_usart.o \
./drivers/fsl_usart_cmsis.o \
./drivers/fsl_usart_dma.o 

C_DEPS += \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_common_arm.d \
./drivers/fsl_dma.d \
./drivers/fsl_flexcomm.d \
./drivers/fsl_gpio.d \
./drivers/fsl_power.d \
./drivers/fsl_reset.d \
./drivers/fsl_usart.d \
./drivers/fsl_usart_cmsis.d \
./drivers/fsl_usart_dma.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c drivers/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DMCUXPRESSO_SDK -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__REDLIB__ -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\utilities" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\drivers" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\component\uart" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\component\lists" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\CMSIS" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\CMSIS_driver" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\board" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\device" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\board" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\source" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\utilities" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\drivers" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\device" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\startup" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\component\uart" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\component\lists" -I"C:\Users\Baptiste\Documents\ENSEA\3D\S10_011_Projet\IDE\lpcxpresso55s69_led_blinky_led\CMSIS" -O0 -fno-common -g3 -mcpu=cortex-m33 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


