#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IJobParallelForExtensions_ParallelForJob_1_T_ExecuteJobFu_M_VerletPhysicsAnimationPostp_J_.h>
#include <Modloader/app/structs/JobRanges.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_Job.h>

namespace app::classes::Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1_T__ExecuteJobFunction_Moon_VerletPhysicsAnimationPostprocess_Job_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::IJobParallelForExtensions_ParallelForJobStruct_1_T_ExecuteJobFunction_Moon_VerletPhysicsAnimationPostprocess_Job_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02264EB0,
        void,
        Invoke,
        app::IJobParallelForExtensions_ParallelForJobStruct_1_T_ExecuteJobFunction_Moon_VerletPhysicsAnimationPostprocess_Job_* this_ptr,
        app::VerletPhysicsAnimationPostprocess_Job* data,
        void* additional_ptr,
        void* buffer_range_patch_data,
        app::JobRanges* ranges,
        int32_t job_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02AC3620,
        app::IAsyncResult*,
        BeginInvoke,
        app::IJobParallelForExtensions_ParallelForJobStruct_1_T_ExecuteJobFunction_Moon_VerletPhysicsAnimationPostprocess_Job_* this_ptr,
        app::VerletPhysicsAnimationPostprocess_Job* data,
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
        app::IJobParallelForExtensions_ParallelForJobStruct_1_T_ExecuteJobFunction_Moon_VerletPhysicsAnimationPostprocess_Job_* this_ptr,
        app::VerletPhysicsAnimationPostprocess_Job* data,
        app::JobRanges* ranges,
        app::IAsyncResult* result
    )
} // namespace app::classes::Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1_T__ExecuteJobFunction_Moon_VerletPhysicsAnimationPostprocess_Job_
