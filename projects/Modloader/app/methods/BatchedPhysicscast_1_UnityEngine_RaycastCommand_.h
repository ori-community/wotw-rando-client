#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::BatchedPhysicscast_1_UnityEngine_RaycastCommand_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472AEF8, BatchedPhysicscast_1_UnityEngine_RaycastCommand___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7CF0, void, Init, (app::BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x047114B8, BatchedPhysicscast_1_UnityEngine_RaycastCommand__Init__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7E50, void, ScheduleJob, (app::BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * this_ptr, app::RaycastCommand__Array* commands))
    IL2CPP_REGISTER_METHODINFO(0x04719750, BatchedPhysicscast_1_UnityEngine_RaycastCommand__ScheduleJob__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7DF0, bool, get_IsComplete, (app::BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764820, BatchedPhysicscast_1_UnityEngine_RaycastCommand__get_IsComplete__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7EB0, void, CompleteJob, (app::BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04722D10, BatchedPhysicscast_1_UnityEngine_RaycastCommand__CompleteJob__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7EC0, void, GetResults, (app::BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * this_ptr, app::RaycastHit__Array* results))
    IL2CPP_REGISTER_METHODINFO(0x04799A48, BatchedPhysicscast_1_UnityEngine_RaycastCommand__GetResults__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7F60, void, Dispose, (app::BatchedPhysicscast_1_UnityEngine_RaycastCommand_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04734440, BatchedPhysicscast_1_UnityEngine_RaycastCommand__Dispose__MethodInfo)
} // namespace app::classes::BatchedPhysicscast_1_UnityEngine_RaycastCommand_
