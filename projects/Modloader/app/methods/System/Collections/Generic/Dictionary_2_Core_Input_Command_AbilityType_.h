#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_Core_Input_Command_AbilityType_.h>
#include <Modloader/app/structs/Input_Command__Enum.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/IEqualityComparer_1_Core_Input_Command_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Core_Input_Command_AbilityType_ {
    IL2CPP_REGISTER_METHOD(0x02BADFC0, bool, TryGetValue, (app::Dictionary_2_Core_Input_Command_AbilityType_ * this_ptr, app::Input_Command__Enum key, app::AbilityType__Enum* value))
    IL2CPP_REGISTER_METHODINFO(0x04734A30, Dictionary_2_Core_Input_Command_AbilityType__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_Core_Input_Command_AbilityType_ * this_ptr, app::Input_Command__Enum key, app::AbilityType__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0476D7E0, Dictionary_2_Core_Input_Command_AbilityType__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_Core_Input_Command_AbilityType_ * this_ptr, app::Input_Command__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x0472C330, Dictionary_2_Core_Input_Command_AbilityType__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DBC900, app::AbilityType__Enum, get_Item, (app::Dictionary_2_Core_Input_Command_AbilityType_ * this_ptr, app::Input_Command__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04740788, Dictionary_2_Core_Input_Command_AbilityType__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DBE060, bool, Remove, (app::Dictionary_2_Core_Input_Command_AbilityType_ * this_ptr, app::Input_Command__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04728E70, Dictionary_2_Core_Input_Command_AbilityType__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_Core_Input_Command_AbilityType_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04799A50, Dictionary_2_Core_Input_Command_AbilityType__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_Core_Input_Command_AbilityType_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047560D8, Dictionary_2_Core_Input_Command_AbilityType__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor, (app::Dictionary_2_Core_Input_Command_AbilityType_ * this_ptr, app::IEqualityComparer_1_Core_Input_Command_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0471F110, Dictionary_2_Core_Input_Command_AbilityType___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Core_Input_Command_AbilityType_
