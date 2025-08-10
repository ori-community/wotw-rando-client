#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/CapsulecastCommand.h>
#include <Modloader/app/structs/CapsulecastCommand__Array.h>
#include <Modloader/app/structs/GenericCastManager_1_UnityEngine_CapsulecastCommand_.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/RaycastHit__Array.h>

namespace app::classes::GenericCastManager_1_UnityEngine_CapsulecastCommand_ {
    IL2CPP_REGISTER_METHOD(
        0x019EBC30,
        bool,
        PerformCastInternal,
        app::CapsulecastCommand cmd,
        app::RaycastHit* hit,
        int32_t* request_i_d,
        bool guarantee_immediate_result
    )
    IL2CPP_REGISTER_METHOD(0x019EE1D0, void, ctor, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019E8F60, bool, get_Immediate, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019E8F70, bool, get_Buffered, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019E8F80, bool, get_BatchJob, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019E8FA0, bool, get_SplitScheduleAndComplete, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019E8FB0, void, Init, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00615270, bool, get_ShouldInvokeAsyncRaycastManager, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019E94F0, void, Dispose, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019E9910, int32_t, GetRequestID, )
    IL2CPP_REGISTER_METHOD(0x019E9A50, bool, get_IsDoubleFixedUpdate, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019E9A60, void, FixedUpdate, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019E9A70, void, Update, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x019E9A80,
        bool,
        AddRequest,
        app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr,
        int32_t request_i_d,
        app::CapsulecastCommand cmd
    )
    IL2CPP_REGISTER_METHOD(
        0x019E9E00,
        bool,
        AddMultipleRequests,
        app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr,
        int32_t request_i_d,
        app::CapsulecastCommand__Array* cmds,
        int32_t cmd_count
    )
    IL2CPP_REGISTER_METHOD(0x019EA1D0, bool, HasResult, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr, int32_t request_i_d)
    IL2CPP_REGISTER_METHOD(
        0x019EA290,
        bool,
        GetResult,
        app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr,
        int32_t request_i_d,
        app::RaycastHit* hit
    )
    IL2CPP_REGISTER_METHOD(
        0x019EA510,
        void,
        GetMultipleResults,
        app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr,
        int32_t request_i_d,
        app::RaycastHit__Array* hits,
        app::Boolean__Array* hit_results,
        int32_t hit_count
    )
    IL2CPP_REGISTER_METHOD(0x019EA840, void, ScheduleJob, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019EABA0, void, CompleteJob, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019EAF70, void, CompleteJobs, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019EB030, void, ScheduleNewJobs, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019EB150, void, Awake, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019EB270, void, OnDestroy, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019EB2A0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x019EB4A0, app::GenericCastManager_1_UnityEngine_CapsulecastCommand_*, get_Instance, )
    IL2CPP_REGISTER_METHOD(
        0x019ECD80,
        bool,
        PerformMultipleCastsInternal,
        app::CapsulecastCommand__Array* cmds,
        app::RaycastHit__Array* hits,
        app::Boolean__Array* hit_results,
        int32_t cmd_count,
        int32_t* request_i_d,
        bool guarantee_immediate_result
    )
    IL2CPP_REGISTER_METHOD(0x019EE1E0, void, cctor, )
} // namespace app::classes::GenericCastManager_1_UnityEngine_CapsulecastCommand_
