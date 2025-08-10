#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FingerRig.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>

namespace app::classes::RootMotion::FinalIK::FingerRig {
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_initiated, app::FingerRig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_initiated, app::FingerRig* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02062460, bool, IsValid, app::FingerRig* this_ptr, app::String** error_message)
    IL2CPP_REGISTER_METHOD(0x020624F0, void, AutoDetect, app::FingerRig* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02062980,
        void,
        AddFinger,
        app::FingerRig* this_ptr,
        app::Transform* bone1,
        app::Transform* bone2,
        app::Transform* bone3,
        app::Transform* tip,
        app::Transform* target
    )
    IL2CPP_REGISTER_METHOD(0x02062C60, void, RemoveFinger, app::FingerRig* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02062E80, void, AddChildrenRecursive, app::FingerRig* this_ptr, app::Transform* parent, app::Transform__Array** array)
    IL2CPP_REGISTER_METHOD(0x02063040, void, InitiateSolver, app::FingerRig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02063190, void, UpdateFingerSolvers, app::FingerRig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02063220, void, FixFingerTransforms, app::FingerRig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02063190, void, UpdateSolver, app::FingerRig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02063220, void, FixTransforms, app::FingerRig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02063290, void, ctor, app::FingerRig* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::FingerRig
