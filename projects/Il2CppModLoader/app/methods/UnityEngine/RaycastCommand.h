#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::RaycastCommand {
    IL2CPP_REGISTER_METHOD(0x00244600, void, ctor, (app::RaycastCommand__Boxed * this_ptr, app::Vector3 from, app::Vector3 direction, float distance, int32_t layer_mask, int32_t max_hits))
    IL2CPP_REGISTER_METHOD(0x001EB5F0, app::Vector3, get_from, (app::RaycastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB610, void, set_from, (app::RaycastCommand__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001EB680, app::Vector3, get_direction, (app::RaycastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB6A0, void, set_direction, (app::RaycastCommand__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001F2880, float, get_distance, (app::RaycastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FB20, void, set_distance, (app::RaycastCommand__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001EB430, int32_t, get_layerMask, (app::RaycastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FB80, void, set_layerMask, (app::RaycastCommand__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00244640, int32_t, get_maxHits, (app::RaycastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001542F0, void, set_maxHits, (app::RaycastCommand__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x030AAE60, app::JobHandle, ScheduleBatch_1, (app::NativeArray_1_UnityEngine_RaycastCommand_ commands, int32_t cmd_count, app::NativeArray_1_UnityEngine_RaycastHit_ results, int32_t result_count, int32_t min_commands_per_job, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHOD(0x030AB010, app::JobHandle, ScheduleBatch_2, (app::NativeArray_1_UnityEngine_RaycastCommand_ commands, app::NativeArray_1_UnityEngine_RaycastHit_ results, int32_t min_commands_per_job, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHOD(0x030AB090, app::JobHandle, ScheduleRaycastBatch, (app::JobsUtility_JobScheduleParameters * parameters, app::Void * commands, int32_t command_len, app::Void * result, int32_t result_len, int32_t min_commands_per_job))
    IL2CPP_REGISTER_METHOD(0x030AB150, void, ScheduleRaycastBatch_Injected, (app::JobsUtility_JobScheduleParameters * parameters, app::Void * commands, int32_t command_len, app::Void * result, int32_t result_len, int32_t min_commands_per_job, app::JobHandle * ret))
}
