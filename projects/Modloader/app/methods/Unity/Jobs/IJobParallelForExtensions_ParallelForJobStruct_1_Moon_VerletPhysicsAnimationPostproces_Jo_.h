#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JobRanges.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_Job.h>

namespace app::classes::Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1_Moon_VerletPhysicsAnimationPostprocess_Job_ {
    IL2CPP_REGISTER_METHOD(0x02AC4160, void*, Initialize, )
    IL2CPP_REGISTER_METHOD(
        0x02AC4520,
        void,
        Execute,
        app::VerletPhysicsAnimationPostprocess_Job* job_data,
        void* additional_ptr,
        void* buffer_range_patch_data,
        app::JobRanges* ranges,
        int32_t job_index
    )
} // namespace app::classes::Unity::Jobs::IJobParallelForExtensions_ParallelForJobStruct_1_Moon_VerletPhysicsAnimationPostprocess_Job_
