################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../allEquation.c \
../epuation.c \
../general.c \
../main.c \
../solver.c 

OBJS += \
./allEquation.o \
./epuation.o \
./general.o \
./main.o \
./solver.o 

C_DEPS += \
./allEquation.d \
./epuation.d \
./general.d \
./main.d \
./solver.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


