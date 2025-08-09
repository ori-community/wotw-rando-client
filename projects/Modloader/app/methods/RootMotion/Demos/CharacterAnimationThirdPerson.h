#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterAnimationThirdPerson.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::Demos::CharacterAnimationThirdPerson {
    IL2CPP_REGISTER_METHOD(0x0220E8C0, void, Start, app::CharacterAnimationThirdPerson* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0220E9E0, app::Vector3, GetPivotPoint, app::CharacterAnimationThirdPerson* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0220EA70, bool, get_animationGrounded, app::CharacterAnimationThirdPerson* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0220ECF0, void, Update, app::CharacterAnimationThirdPerson* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0220F530, void, OnAnimatorMove, app::CharacterAnimationThirdPerson* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0220F680, void, ctor, app::CharacterAnimationThirdPerson* this_ptr)
} // namespace app::classes::RootMotion::Demos::CharacterAnimationThirdPerson
