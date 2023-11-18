#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpherecastCommand__Boxed.h>
#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/JobsUtility_JobScheduleParameters.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_SpherecastCommand_.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Void.h>

namespace app::classes::UnityEngine::SpherecastCommand {
    IL2CPP_REGISTER_METHOD(0x00244720, void, ctor, (app::SpherecastCommand__Boxed * this_ptr, app::Vector3 origin, float radius, app::Vector3 direction, float distance, int32_t layer_mask))
    IL2CPP_REGISTER_METHOD(0x001EB5F0, app::Vector3, get_origin, (app::SpherecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB610, void, set_origin, (app::SpherecastCommand__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001D9BA0, float, get_radius, (app::SpherecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00115B40, void, set_radius, (app::SpherecastCommand__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00244760, app::Vector3, get_direction, (app::SpherecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00124A20, void, set_direction, (app::SpherecastCommand__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x002446A0, float, get_distance, (app::SpherecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00122E20, void, set_distance, (app::SpherecastCommand__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00244640, int32_t, get_layerMask, (app::SpherecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001542F0, void, set_layerMask, (app::SpherecastCommand__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00229300, int32_t, get_maxHits, (app::SpherecastCommand__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00116250, void, set_maxHits, (app::SpherecastCommand__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x030AF7D0, app::JobHandle, ScheduleBatch_1, (app::NativeArray_1_UnityEngine_SpherecastCommand_ commands, int32_t cmd_count, app::NativeArray_1_UnityEngine_RaycastHit_ results, int32_t result_count, int32_t min_commands_per_job, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHOD(0x030AF980, app::JobHandle, ScheduleBatch_2, (app::NativeArray_1_UnityEngine_SpherecastCommand_ commands, app::NativeArray_1_UnityEngine_RaycastHit_ results, int32_t min_commands_per_job, app::JobHandle depends_on))
    IL2CPP_REGISTER_METHOD(0x030AFA00, app::JobHandle, ScheduleSpherecastBatch, (app::JobsUtility_JobScheduleParameters * parameters, app::Void* commands, int32_t command_len, app::Void* result, int32_t result_len, int32_t min_commands_per_job))
    IL2CPP_REGISTER_METHOD(0x030AFAC0, void, ScheduleSpherecastBatch_Injected, (app::JobsUtility_JobScheduleParameters * parameters, app::Void* commands, int32_t command_len, app::Void* result, int32_t result_len, int32_t min_commands_per_job, app::JobHandle* ret))
} // namespace app::classes::UnityEngine::SpherecastCommand
