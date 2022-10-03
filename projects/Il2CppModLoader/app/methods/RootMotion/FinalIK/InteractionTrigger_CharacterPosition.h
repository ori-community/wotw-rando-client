#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::InteractionTrigger_CharacterPosition {
    IL2CPP_REGISTER_METHOD(0x02A16B70, app::Vector3, get_offset3D, (app::InteractionTrigger_CharacterPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A16B90, app::Vector3, get_direction3D, (app::InteractionTrigger_CharacterPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A16CF0, bool, IsInRange, (app::InteractionTrigger_CharacterPosition * this_ptr, app::Transform* character, app::Transform* trigger, float* error))
    IL2CPP_REGISTER_METHOD(0x02A176C0, void, ctor, (app::InteractionTrigger_CharacterPosition * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::InteractionTrigger_CharacterPosition
