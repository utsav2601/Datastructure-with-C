################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Bubble.cpp \
../Insertion.cpp \
../Selection.cpp \
../Sorting.cpp \
../mergeSort.cpp \
../quickSort.cpp 

OBJS += \
./Bubble.o \
./Insertion.o \
./Selection.o \
./Sorting.o \
./mergeSort.o \
./quickSort.o 

CPP_DEPS += \
./Bubble.d \
./Insertion.d \
./Selection.d \
./Sorting.d \
./mergeSort.d \
./quickSort.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


