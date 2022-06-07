#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1_T__ExecuteJobFunction_SoundZoneProcessor_Job_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IJobParallelForExtensions_ParallelForJobStruct_1_T_ExecuteJobFunction_SoundZoneProcessor_Job_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02264EB0, void, Invoke, (app::IJobParallelForExtensions_ParallelForJobStruct_1_T_ExecuteJobFunction_SoundZoneProcessor_Job_ * this_ptr, app::SoundZoneProcessor_Job * data, void * additional_ptr, void * buffer_range_patch_data, app::JobRanges * ranges, int32_t job_index))
    IL2CPP_REGISTER_METHOD(0x02AC3750, app::IAsyncResult *, BeginInvoke, (app::IJobParallelForExtensions_ParallelForJobStruct_1_T_ExecuteJobFunction_SoundZoneProcessor_Job_ * this_ptr, app::SoundZoneProcessor_Job * data, void * additional_ptr, void * buffer_range_patch_data, app::JobRanges * ranges, int32_t job_index, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (app::IJobParallelForExtensions_ParallelForJobStruct_1_T_ExecuteJobFunction_SoundZoneProcessor_Job_ * this_ptr, app::SoundZoneProcessor_Job * data, app::JobRanges * ranges, app::IAsyncResult * result))
}
