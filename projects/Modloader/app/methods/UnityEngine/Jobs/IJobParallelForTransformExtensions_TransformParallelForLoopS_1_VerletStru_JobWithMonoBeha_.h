#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JobRanges.h>
#include <Modloader/app/structs/VerletStructure_JobWithMonoBehaviour.h>

namespace app::classes::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_VerletStructure_JobWithMonoBehaviour_ {
    IL2CPP_REGISTER_METHOD(0x02ACCBE0, void*, Initialize, )
    IL2CPP_REGISTER_METHOD(
        0x02ACCFA0,
        void,
        Execute,
        app::VerletStructure_JobWithMonoBehaviour* job_data,
        void* job_data2,
        void* buffer_range_patch_data,
        app::JobRanges* ranges,
        int32_t job_index
    )
} // namespace app::classes::UnityEngine::Jobs::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_VerletStructure_JobWithMonoBehaviour_
