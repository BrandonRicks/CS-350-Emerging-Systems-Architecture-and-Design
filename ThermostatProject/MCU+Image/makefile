################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := E:/Coding/CCStudio IDE/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./gpiointerrupt.obj" \
"./syscfg/ti_drivers_config.obj" \
"./main_nortos.obj" \
"../cc32xxs_nortos.cmd" \
$(GEN_CMDS__FLAG) \
-lti_utils_build_linker.cmd.genlibs \
-l"ti/devices/cc32xx/driverlib/ccs/Release/driverlib.a" \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
ThermostatProject.out \

EXE_OUTPUTS__QUOTED += \
"ThermostatProject.out" \

BIN_OUTPUTS += \
ThermostatProject.hex \

BIN_OUTPUTS__QUOTED += \
"ThermostatProject.hex" \

CUSTOM_TOOL_OUTPUTS_1947556436 += \
ThermostatProject.bin \

CUSTOM_TOOL_OUTPUTS_1947556436__QUOTED += \
"ThermostatProject.bin" \

CUSTOM_TOOL_OUTPUTS_1666716282 += \
syscfg/ThermostatProject.sli \

CUSTOM_TOOL_OUTPUTS_1666716282__QUOTED += \
"syscfg\ThermostatProject.sli" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "ThermostatProject.out" secondary-outputs

# Tool invocations
ThermostatProject.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: Arm Linker'
	"E:/Coding/CCStudio IDE/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=none -me --define=NORTOS_SUPPORT -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on -z -m"ThermostatProject.map" -i"E:/Coding/CCStudio IDE/simplelink_cc32xx_sdk_5_20_00_06/source" -i"E:/Coding/CCStudio IDE/simplelink_cc32xx_sdk_5_20_00_06/kernel/nortos" -i"E:/Coding/CCStudio IDE/workspace/ThermostatProject/MCU+Image/syscfg" -i"E:/Coding/CCStudio IDE/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/lib" --diag_suppress=10063 --diag_wrap=off --display_error_number --warn_sections --xml_link_info="ThermostatProject_linkInfo.xml" --entry_point=resetISR --rom_model -o "ThermostatProject.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

ThermostatProject.hex: $(EXE_OUTPUTS)
	@echo 'Building secondary target: "$@"'
	@echo 'Invoking: Arm Hex Utility'
	"E:/Coding/CCStudio IDE/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armhex" --diag_wrap=off -o "ThermostatProject.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building secondary target: "$@"'
	@echo ' '

ThermostatProject.bin: $(EXE_OUTPUTS) ThermostatProject.out
	@echo 'Building secondary target: "$@"'
	@echo 'Invoking: Arm ObjCopy'
	"E:/Coding/CCStudio IDE/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armobjcopy" -O binary --only-section .text --only-section .const --only-section .cinit --only-section .resetVecs "ThermostatProject.out" "ThermostatProject.bin"
	@echo 'Finished building secondary target: "$@"'
	@echo ' '

syscfg/ThermostatProject.sli: $(EXE_OUTPUTS) ThermostatProject.bin syscfg/ti_drivers_net_wifi_config.json
	@echo 'Building secondary target: "$@"'
	@echo 'Invoking: Image Creator'
	"E:/Coding/CCStudio IDE/simplelink_cc32xx_sdk_5_20_00_06/source/ti/drivers/net/imagecreator/bin/SLImageCreator.exe" syscfg create_image --sdk_path "E:/Coding/CCStudio IDE/simplelink_cc32xx_sdk_5_20_00_06" --json "E:/Coding/CCStudio IDE/workspace/ThermostatProject/MCU+Image/syscfg/ti_drivers_net_wifi_config.json" --file "E:/Coding/CCStudio IDE/workspace/ThermostatProject/MCU+Image/syscfg/ThermostatProject.sli" --mcu "E:/Coding/CCStudio IDE/workspace/ThermostatProject/MCU+Image/ThermostatProject.bin"
	@echo 'Finished building secondary target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CUSTOM_TOOL_OUTPUTS_1947556436__QUOTED)$(GEN_MISC_FILES__QUOTED)$(BIN_OUTPUTS__QUOTED)$(GEN_FILES__QUOTED)$(CUSTOM_TOOL_OUTPUTS_1666716282__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "gpiointerrupt.obj" "syscfg\ti_drivers_config.obj" "main_nortos.obj" 
	-$(RM) "gpiointerrupt.d" "syscfg\ti_drivers_config.d" "main_nortos.d" 
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-@echo 'Finished clean'
	-@echo ' '

secondary-outputs: $(CUSTOM_TOOL_OUTPUTS_1947556436) $(CUSTOM_TOOL_OUTPUTS_1666716282)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

