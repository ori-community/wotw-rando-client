#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::CapsulecastCommand {
    IL2CPP_REGISTER_METHOD(0x00244140, void, ctor, (app::CapsulecastCommand__Boxed * this_ptr, app::Vector3 p1, app::Vector3 p2, float radius, app::Vector3 direction, float distance, int32_t layer_mask))
    IL2CPP_REGISTER_METHOD(0x001EB5F0, app::Vector3, get_point1, (app::CapsulecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB610, void, set_point1, (app::CapsulecastCommand__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001EB680, app::Vector3, get_point2, (app::CapsulecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB6A0, void, set_point2, (app::CapsulecastCommand__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001F2880, float, get_radius, (app::CapsulecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FB20, void, set_radius, (app::CapsulecastCommand__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002441A0, app::Vector3, get_direction, (app::CapsulecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002441C0, void, set_direction, (app::CapsulecastCommand__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x002441D0, float, get_distance, (app::CapsulecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00115A80, void, set_distance, (app::CapsulecastCommand__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002441E0, int32_t, get_layerMask, (app::CapsulecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00116270, void, set_layerMask, (app::CapsulecastCommand__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002441F0, int32_t, get_maxHits, (app::CapsulecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00116290, void, set_maxHits, (app::CapsulecastCommand__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0309E4C0, app::JobHandle, ScheduleBatch, (app::NativeArray_1_UnityEngine_CapsulecastCommand_ commands, int32_t cmd_count, app::NativeArray_1_UnityEngine_RaycastHit_ results, int32_t result_count, int32_t min_commands_per_job, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHOD(0x0309E670, app::JobHandle, ScheduleCapsulecastBatch, (app::JobsUtility_JobScheduleParameters * parameters, app::Void* commands, int32_t command_len, app::Void* result, int32_t result_len, int32_t min_commands_per_job))
    IL2CPP_REGISTER_METHOD(0x0309E730, void, ScheduleCapsulecastBatch_Injected, (app::JobsUtility_JobScheduleParameters * parameters, app::Void* commands, int32_t command_len, app::Void* result, int32_t result_len, int32_t min_commands_per_job, app::JobHandle* ret))
} // namespace app::classes::UnityEngine::CapsulecastCommand
