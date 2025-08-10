#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimatorController3rdPerson.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::Demos::AnimatorController3rdPerson {
    IL2CPP_REGISTER_METHOD(0x02208F90, void, Start, app::AnimatorController3rdPerson* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02209020, void, OnAnimatorMove, app::AnimatorController3rdPerson* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02209670,
        void,
        Move,
        app::AnimatorController3rdPerson* this_ptr,
        app::Vector3 move_input,
        bool is_moving,
        app::Vector3 face_direction,
        app::Vector3 aim_target
    )
    IL2CPP_REGISTER_METHOD(0x02209C50, void, ctor, app::AnimatorController3rdPerson* this_ptr)
} // namespace app::classes::RootMotion::Demos::AnimatorController3rdPerson
