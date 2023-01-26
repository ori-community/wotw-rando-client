#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/SeinLogicCycle_StateFlags__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_ * this_ptr, app::AbilityType__Enum key, app::SeinLogicCycle_StateFlags__Enum* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_ * this_ptr, app::AbilityType__Enum key, app::SeinLogicCycle_StateFlags__Enum value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_
