#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharacterAnimationSimple.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::Demos::CharacterAnimationSimple {
    IL2CPP_REGISTER_METHOD(0x0220E280, void, Start, (app::CharacterAnimationSimple * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0220E320, app::Vector3, GetPivotPoint, (app::CharacterAnimationSimple * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0220E560, void, Update, (app::CharacterAnimationSimple * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0220E260, void, ctor, (app::CharacterAnimationSimple * this_ptr))
} // namespace app::classes::RootMotion::Demos::CharacterAnimationSimple
