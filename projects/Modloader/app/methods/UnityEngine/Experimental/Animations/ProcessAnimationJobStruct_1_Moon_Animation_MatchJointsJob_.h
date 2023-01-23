#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MatchJointsJob.h>
#include <Modloader/app/structs/JobRanges.h>

namespace app::classes::UnityEngine::Experimental::Animations::ProcessAnimationJobStruct_1_Moon_Animation_MatchJointsJob_ {
    IL2CPP_REGISTER_METHOD(0x02ACB6D0, void*, GetJobReflectionData, ())
    IL2CPP_REGISTER_METHOD(0x02ACBCA0, void, ExecuteProcessAnimation, (app::MatchJointsJob * data, void* animation_stream_ptr, void* unused_ptr, app::JobRanges* ranges, int32_t job_index))
    IL2CPP_REGISTER_METHOD(0x02ACBD60, void, ExecuteProcessRootMotion, (app::MatchJointsJob * data, void* animation_stream_ptr, void* unused_ptr, app::JobRanges* ranges, int32_t job_index))
} // namespace app::classes::UnityEngine::Experimental::Animations::ProcessAnimationJobStruct_1_Moon_Animation_MatchJointsJob_
