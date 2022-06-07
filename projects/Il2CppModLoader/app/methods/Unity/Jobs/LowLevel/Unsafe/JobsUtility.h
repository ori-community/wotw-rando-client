#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Unity::Jobs::LowLevel::Unsafe::JobsUtility {
    IL2CPP_REGISTER_METHOD(0x024194D0, void, GetJobRange, (app::JobRanges * ranges, int32_t job_index, int32_t * begin_index, int32_t * end_index))
    IL2CPP_REGISTER_METHOD(0x024194F0, bool, GetWorkStealingRange, (app::JobRanges * ranges, int32_t job_index, int32_t * begin_index, int32_t * end_index))
    IL2CPP_REGISTER_METHOD(0x02419570, app::JobHandle, Schedule, (app::JobsUtility_JobScheduleParameters * parameters))
    IL2CPP_REGISTER_METHOD(0x024195F0, app::JobHandle, ScheduleParallelFor, (app::JobsUtility_JobScheduleParameters * parameters, int32_t array_length, int32_t innerloop_batch_count))
    IL2CPP_REGISTER_METHOD(0x02419690, app::JobHandle, ScheduleParallelForTransform, (app::JobsUtility_JobScheduleParameters * parameters, void * transfrom_accesss_array))
    IL2CPP_REGISTER_METHOD(0x02419720, void *, CreateJobReflectionData_1, (app::Type * wrapper_job_type, app::Type * user_job_type, app::JobType__Enum job_type, app::Object * managed_job_function0, app::Object * managed_job_function1, app::Object * managed_job_function2))
    IL2CPP_REGISTER_METHOD(0x024197B0, void *, CreateJobReflectionData_2, (app::Type * type, app::JobType__Enum job_type, app::Object * managed_job_function0, app::Object * managed_job_function1, app::Object * managed_job_function2))
    IL2CPP_REGISTER_METHOD(0x02419840, void, Schedule_Injected, (app::JobsUtility_JobScheduleParameters * parameters, app::JobHandle * ret))
    IL2CPP_REGISTER_METHOD(0x024198A0, void, ScheduleParallelFor_Injected, (app::JobsUtility_JobScheduleParameters * parameters, int32_t array_length, int32_t innerloop_batch_count, app::JobHandle * ret))
    IL2CPP_REGISTER_METHOD(0x02419920, void, ScheduleParallelForTransform_Injected, (app::JobsUtility_JobScheduleParameters * parameters, void * transfrom_accesss_array, app::JobHandle * ret))
}
