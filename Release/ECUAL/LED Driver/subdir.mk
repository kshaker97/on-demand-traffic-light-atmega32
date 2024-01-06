################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ECUAL/LED\ Driver/led.c \
../ECUAL/LED\ Driver/led_test.c 

OBJS += \
./ECUAL/LED\ Driver/led.o \
./ECUAL/LED\ Driver/led_test.o 

C_DEPS += \
./ECUAL/LED\ Driver/led.d \
./ECUAL/LED\ Driver/led_test.d 


# Each subdirectory must supply rules for building sources it contributes
ECUAL/LED\ Driver/led.o: ../ECUAL/LED\ Driver/led.c ECUAL/LED\ Driver/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"ECUAL/LED Driver/led.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

ECUAL/LED\ Driver/led_test.o: ../ECUAL/LED\ Driver/led_test.c ECUAL/LED\ Driver/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"ECUAL/LED Driver/led_test.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


