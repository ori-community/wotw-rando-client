#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_AbilityType_Core_Input_Command_.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/IEqualityComparer_1_AbilityType_.h>
#include <Modloader/app/structs/Input_Command__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_AbilityType_Core_Input_Command_ {
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_AbilityType_Core_Input_Command_ * this_ptr, app::AbilityType__Enum key, app::Input_Command__Enum value))
    IL2CPP_REGISTER_METHOD(0x02EA5530, bool, Remove, (app::Dictionary_2_AbilityType_Core_Input_Command_ * this_ptr, app::AbilityType__Enum key))
    IL2CPP_REGISTER_METHOD(0x02BB43A0, bool, TryGetValue, (app::Dictionary_2_AbilityType_Core_Input_Command_ * this_ptr, app::AbilityType__Enum key, app::Input_Command__Enum* value))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_AbilityType_Core_Input_Command_ * this_ptr, app::AbilityType__Enum key))
    IL2CPP_REGISTER_METHOD(0x02EA3DB0, app::Input_Command__Enum, get_Item, (app::Dictionary_2_AbilityType_Core_Input_Command_ * this_ptr, app::AbilityType__Enum key))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_AbilityType_Core_Input_Command_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor, (app::Dictionary_2_AbilityType_Core_Input_Command_ * this_ptr, app::IEqualityComparer_1_AbilityType_* comparer))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_AbilityType_Core_Input_Command_
