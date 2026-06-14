#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BatchedPhysicscast_1_UnityEngine_SpherecastCommand_.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/SpherecastCommand__Array.h>

namespace app::classes::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D8090, void, Init, app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x019D7DF0, bool, get_IsComplete, app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D7EB0, void, CompleteJob, app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x019D7E50,
        void,
        ScheduleJob,
        app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_* this_ptr,
        app::SpherecastCommand__Array* commands
    )
    IL2CPP_REGISTER_METHOD(0x019D8190, void, GetResults, app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_* this_ptr, app::RaycastHit__Array* results)
    IL2CPP_REGISTER_METHOD(0x019D8230, void, Dispose, app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_* this_ptr)
} // namespace app::classes::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_
