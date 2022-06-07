#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::Demos::CharacterAnimationThirdPersonIK {
    IL2CPP_REGISTER_METHOD(0x0220F6C0, void, Start, (app::CharacterAnimationThirdPersonIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0220F850, void, LateUpdate, (app::CharacterAnimationThirdPersonIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0220FDA0, void, RotateEffector, (app::CharacterAnimationThirdPersonIK * this_ptr, app::IKEffector * effector, app::Quaternion rotation, float mlp))
    IL2CPP_REGISTER_METHOD(0x0220F680, void, ctor, (app::CharacterAnimationThirdPersonIK * this_ptr))
}
