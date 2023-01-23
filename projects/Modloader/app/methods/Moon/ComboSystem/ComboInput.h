#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/InputDirection__Enum.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ButtonInputType__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::ComboSystem::ComboInput {
    IL2CPP_REGISTER_METHOD(0x00CC59C0, void, ctor, (app::ComboInput * this_ptr, app::InputDirection__Enum direction, app::AbilityType__Enum action, app::ButtonInputType__Enum input_type, bool facing_left))
    IL2CPP_REGISTER_METHOD(0x0052B590, app::AbilityType__Enum, get_ActionInput, (app::ComboInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, app::InputDirection__Enum, get_InputDirection, (app::ComboInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::ButtonInputType__Enum, get_ButtonInputType, (app::ComboInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_StartFacingLeft, (app::ComboInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59F0, bool, Equals_1, (app::ComboInput * this_ptr, app::ComboInput* other))
    IL2CPP_REGISTER_METHOD(0x00CC5A20, bool, Equals_2, (app::ComboInput * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x00CC5B30, int32_t, GetHashCode, (app::ComboInput * this_ptr))
} // namespace app::classes::Moon::ComboSystem::ComboInput
