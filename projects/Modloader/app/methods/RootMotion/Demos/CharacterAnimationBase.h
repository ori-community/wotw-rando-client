#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::Demos::CharacterAnimationBase {
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, GetPivotPoint, (app::CharacterAnimationBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_animationGrounded, (app::CharacterAnimationBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0220CF60, float, GetAngleFromForward, (app::CharacterAnimationBase * this_ptr, app::Vector3 world_direction))
    IL2CPP_REGISTER_METHOD(0x0220D0F0, void, Start, (app::CharacterAnimationBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0220D980, void, LateUpdate, (app::CharacterAnimationBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0220E260, void, ctor, (app::CharacterAnimationBase * this_ptr))
} // namespace app::classes::RootMotion::Demos::CharacterAnimationBase
