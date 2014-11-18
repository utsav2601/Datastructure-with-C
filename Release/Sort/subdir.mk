################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Sort/Bubble.cpp 

OBJS += \
./Sort/Bubble.o 

CPP_DEPS += \
./Sort/Bubble.d 


# Each subdirectory must supply rules for building sources it contributes
Sort/%.o: ../Sort/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


