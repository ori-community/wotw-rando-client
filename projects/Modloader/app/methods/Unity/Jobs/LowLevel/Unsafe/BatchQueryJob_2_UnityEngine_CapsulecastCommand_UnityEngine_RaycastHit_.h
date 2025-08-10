#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BatchQueryJob_2_UnityEngine_CapsulecastCommand_UnityEngine_RaycastHit___Boxed.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_CapsulecastCommand_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastHit_.h>

namespace app::classes::Unity::Jobs::LowLevel::Unsafe::BatchQueryJob_2_UnityEngine_CapsulecastCommand_UnityEngine_RaycastHit_ {
    IL2CPP_REGISTER_METHOD(
        0x0014F8E0,
        void,
        ctor,
        app::BatchQueryJob_2_UnityEngine_CapsulecastCommand_UnityEngine_RaycastHit___Boxed* this_ptr,
        app::NativeArray_1_UnityEngine_CapsulecastCommand_ commands,
        app::NativeArray_1_UnityEngine_RaycastHit_ results
    )
}
