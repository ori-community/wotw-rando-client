#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Input_Command__Enum.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinInput.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::SeinInput {
    IL2CPP_REGISTER_METHOD(0x0100E930, void, ctor, app::SeinInput* this_ptr, app::SeinCharacter* sein)
    IL2CPP_REGISTER_METHOD(0x0100ECB0, int32_t, get_NormalizedHorizontal, app::SeinInput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0100ED00, int32_t, get_NormalizedVertical, app::SeinInput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0100ED50, float, get_Horizontal, app::SeinInput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0100ED70, float, get_Vertical, app::SeinInput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0100ED90, app::Vector2, get_Axis, app::SeinInput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0100EDA0, app::Vector2, WorldToLocal, app::SeinInput* this_ptr, app::Vector2 speed)
    IL2CPP_REGISTER_METHOD(0x0100EDF0, void, Update, app::SeinInput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0100F030, app::Input_InputButtonProcessor*, GetButton, app::SeinInput* this_ptr, app::AbilityType__Enum ability)
    IL2CPP_REGISTER_METHOD(0x0100F0E0, app::AbilityType__Enum, GetAssignedAbility, app::SeinInput* this_ptr, app::Input_Command__Enum button)
    IL2CPP_REGISTER_METHOD(0x0100F180, void, BindButton, app::SeinInput* this_ptr, app::AbilityType__Enum ability, app::Input_Command__Enum button)
} // namespace app::classes::SeinInput
