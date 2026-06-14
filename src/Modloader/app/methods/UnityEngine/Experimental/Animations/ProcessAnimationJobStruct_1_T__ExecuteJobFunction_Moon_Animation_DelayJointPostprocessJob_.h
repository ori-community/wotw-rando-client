#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DelayJointPostprocessJob.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/JobRanges.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ProcessAnimationJobStruct_1_T_ExecuteJobFunction_Moon_Animation_DelayJointPostprocessJob_.h>

namespace app::classes::UnityEngine::Experimental::Animations::ProcessAnimationJobStruct_1_T__ExecuteJobFunction_Moon_Animation_DelayJointPostprocessJob_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::ProcessAnimationJobStruct_1_T_ExecuteJobFunction_Moon_Animation_DelayJointPostprocessJob_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02264EB0,
        void,
        Invoke,
        app::ProcessAnimationJobStruct_1_T_ExecuteJobFunction_Moon_Animation_DelayJointPostprocessJob_* this_ptr,
        app::DelayJointPostprocessJob* data,
        void* animation_stream_ptr,
        void* unused_ptr,
        app::JobRanges* ranges,
        int32_t job_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02ACAD70,
        app::IAsyncResult*,
        BeginInvoke,
        app::ProcessAnimationJobStruct_1_T_ExecuteJobFunction_Moon_Animation_DelayJointPostprocessJob_* this_ptr,
        app::DelayJointPostprocessJob* data,
        void* animation_stream_ptr,
        void* unused_ptr,
        app::JobRanges* ranges,
        int32_t job_index,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x012E78E0,
        void,
        EndInvoke,
        app::ProcessAnimationJobStruct_1_T_ExecuteJobFunction_Moon_Animation_DelayJointPostprocessJob_* this_ptr,
        app::DelayJointPostprocessJob* data,
        app::JobRanges* ranges,
        app::IAsyncResult* result
    )
} // namespace app::classes::UnityEngine::Experimental::Animations::ProcessAnimationJobStruct_1_T__ExecuteJobFunction_Moon_Animation_DelayJointPostprocessJob_
