#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimatorController3rdPersonIK.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::Demos::AnimatorController3rdPersonIK {
    IL2CPP_REGISTER_METHOD(0x02209C80, void, OnGUI, app::AnimatorController3rdPersonIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02209D10, void, Start, app::AnimatorController3rdPersonIK* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0220A040,
        void,
        Move,
        app::AnimatorController3rdPersonIK* this_ptr,
        app::Vector3 move_input,
        bool is_moving,
        app::Vector3 face_direction,
        app::Vector3 aim_target
    )
    IL2CPP_REGISTER_METHOD(0x0220A220, void, Read, app::AnimatorController3rdPersonIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0220A690, void, AimIK, app::AnimatorController3rdPersonIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0220A760, void, FBBIK, app::AnimatorController3rdPersonIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0220B0F0, void, HeadLookAt, app::AnimatorController3rdPersonIK* this_ptr, app::Vector3 look_at_target)
    IL2CPP_REGISTER_METHOD(0x0220B7B0, void, ctor, app::AnimatorController3rdPersonIK* this_ptr)
} // namespace app::classes::RootMotion::Demos::AnimatorController3rdPersonIK
