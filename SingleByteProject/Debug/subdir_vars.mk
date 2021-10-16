################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CMD_SRCS += \
../cc32xxs_nortos.cmd 

SYSCFG_SRCS += \
../image.syscfg \
../uartecho.syscfg 

C_SRCS += \
../main_nortos.c \
../uartecho.c \
./syscfg/ti_drivers_config.c 

GEN_FILES += \
./syscfg/ti_drivers_config.c 

GEN_MISC_DIRS += \
./syscfg/ \
./syscfg/ 

C_DEPS += \
./main_nortos.d \
./uartecho.d \
./syscfg/ti_drivers_config.d 

OBJS += \
./main_nortos.obj \
./uartecho.obj \
./syscfg/ti_drivers_config.obj 

GEN_MISC_FILES += \
./syscfg/ti_drivers_net_wifi_config.json \
./syscfg/ti_drivers_config.h \
./syscfg/ti_utils_build_linker.cmd.genlibs \
./syscfg/syscfg_c.rov.xs \
./syscfg/ti_utils_runtime_model.gv \
./syscfg/ti_utils_runtime_Makefile 

GEN_MISC_DIRS__QUOTED += \
"syscfg\" \
"syscfg\" 

OBJS__QUOTED += \
"main_nortos.obj" \
"uartecho.obj" \
"syscfg\ti_drivers_config.obj" 

GEN_MISC_FILES__QUOTED += \
"syscfg\ti_drivers_net_wifi_config.json" \
"syscfg\ti_drivers_config.h" \
"syscfg\ti_utils_build_linker.cmd.genlibs" \
"syscfg\syscfg_c.rov.xs" \
"syscfg\ti_utils_runtime_model.gv" \
"syscfg\ti_utils_runtime_Makefile" 

C_DEPS__QUOTED += \
"main_nortos.d" \
"uartecho.d" \
"syscfg\ti_drivers_config.d" 

GEN_FILES__QUOTED += \
"syscfg\ti_drivers_config.c" 

SYSCFG_SRCS__QUOTED += \
"../image.syscfg" \
"../uartecho.syscfg" 

C_SRCS__QUOTED += \
"../main_nortos.c" \
"../uartecho.c" \
"./syscfg/ti_drivers_config.c" 


