################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ECUAL/BUTTON\ Driver/button.c \
../ECUAL/BUTTON\ Driver/button_test.c 

OBJS += \
./ECUAL/BUTTON\ Driver/button.o \
./ECUAL/BUTTON\ Driver/button_test.o 

C_DEPS += \
./ECUAL/BUTTON\ Driver/button.d \
./ECUAL/BUTTON\ Driver/button_test.d 


# Each subdirectory must supply rules for building sources it contributes
ECUAL/BUTTON\ Driver/button.o: ../ECUAL/BUTTON\ Driver/button.c ECUAL/BUTTON\ Driver/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"ECUAL/BUTTON Driver/button.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

ECUAL/BUTTON\ Driver/button_test.o: ../ECUAL/BUTTON\ Driver/button_test.c ECUAL/BUTTON\ Driver/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"ECUAL/BUTTON Driver/button_test.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


