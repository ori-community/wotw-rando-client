#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IJobParallelForExtensions_ParallelForJobStru_1_T_ExecuteJobFuncti_M_MoonTrailSys_Simulate_.h>
#include <Modloader/app/structs/JobRanges.h>
#include <Modloader/app/structs/MoonTrailSystem_SimulateJob.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1_T__ExecuteJobFunction_Moon_MoonTrailSystem_SimulateJob_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::IJobParallelForExtensions_ParallelForJobStruct_1_T_ExecuteJobFunction_Moon_MoonTrailSystem_SimulateJob_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02264EB0,
        void,
        Invoke,
        app::IJobParallelForExtensions_ParallelForJobStruct_1_T_ExecuteJobFunction_Moon_MoonTrailSystem_SimulateJob_* this_ptr,
        app::MoonTrailSystem_SimulateJob* data,
        void* additional_ptr,
        void* buffer_range_patch_data,
        app::JobRanges* ranges,
        int32_t job_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02AC34F0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IJobParallelForExtensions_ParallelForJobStruct_1_T_ExecuteJobFunction_Moon_MoonTrailSystem_SimulateJob_* this_ptr,
        app::MoonTrailSystem_SimulateJob* data,
        void* additional_ptr,
        void* buffer_range_patch_data,
        app::JobRanges* ranges,
        int32_t job_index,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x012E78E0,
        void,
        EndInvoke,
        app::IJobParallelForExtensions_ParallelForJobStruct_1_T_ExecuteJobFunction_Moon_MoonTrailSystem_SimulateJob_* this_ptr,
        app::MoonTrailSystem_SimulateJob* data,
        app::JobRanges* ranges,
        app::IAsyncResult* result
    )
} // namespace app::classes::Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1_T__ExecuteJobFunction_Moon_MoonTrailSystem_SimulateJob_
