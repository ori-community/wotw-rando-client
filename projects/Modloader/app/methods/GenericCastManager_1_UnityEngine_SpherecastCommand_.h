#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpherecastCommand.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SpherecastCommand__Array.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/GenericCastManager_1_UnityEngine_SpherecastCommand_.h>

namespace app::classes::GenericCastManager_1_UnityEngine_SpherecastCommand_ {
    IL2CPP_REGISTER_METHOD(0x019F5A80, bool, PerformCastInternal, (app::SpherecastCommand cmd, app::RaycastHit* hit, int32_t* request_i_d, bool guarantee_immediate_result))
    IL2CPP_REGISTER_METHODINFO(0x047227C0, GenericCastManager_1_UnityEngine_SpherecastCommand__PerformCastInternal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019F6BB0, bool, PerformMultipleCastsInternal, (app::SpherecastCommand__Array * cmds, app::RaycastHit__Array* hits, app::Boolean__Array* hit_results, int32_t cmd_count, int32_t* request_i_d, bool guarantee_immediate_result))
    IL2CPP_REGISTER_METHODINFO(0x0471F290, GenericCastManager_1_UnityEngine_SpherecastCommand__PerformMultipleCastsInternal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019EE1D0, void, ctor, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729C20, GenericCastManager_1_UnityEngine_SpherecastCommand___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E8F60, bool, get_Immediate, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E8F70, bool, get_Buffered, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E8F80, bool, get_BatchJob, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E8FA0, bool, get_SplitScheduleAndComplete, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F32C0, void, Init, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615270, bool, get_ShouldInvokeAsyncRaycastManager, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F3800, void, Dispose, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E9910, int32_t, GetRequestID, ())
    IL2CPP_REGISTER_METHOD(0x019E9A50, bool, get_IsDoubleFixedUpdate, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E9A60, void, FixedUpdate, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E9A70, void, Update, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F3C20, bool, AddRequest, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr, int32_t request_i_d, app::SpherecastCommand cmd))
    IL2CPP_REGISTER_METHOD(0x019F3FA0, bool, AddMultipleRequests, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr, int32_t request_i_d, app::SpherecastCommand__Array* cmds, int32_t cmd_count))
    IL2CPP_REGISTER_METHOD(0x019F4370, bool, HasResult, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr, int32_t request_i_d))
    IL2CPP_REGISTER_METHOD(0x019F4430, bool, GetResult, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr, int32_t request_i_d, app::RaycastHit* hit))
    IL2CPP_REGISTER_METHOD(0x019F46B0, void, GetMultipleResults, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr, int32_t request_i_d, app::RaycastHit__Array* hits, app::Boolean__Array* hit_results, int32_t hit_count))
    IL2CPP_REGISTER_METHOD(0x019F49E0, void, ScheduleJob, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F4D40, void, CompleteJob, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019EAF70, void, CompleteJobs, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019EB030, void, ScheduleNewJobs, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019EB150, void, Awake, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019EB270, void, OnDestroy, (app::GenericCastManager_1_UnityEngine_SpherecastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F50F0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x019F52F0, app::GenericCastManager_1_UnityEngine_SpherecastCommand_*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x019F8000, void, cctor, ())
} // namespace app::classes::GenericCastManager_1_UnityEngine_SpherecastCommand_
