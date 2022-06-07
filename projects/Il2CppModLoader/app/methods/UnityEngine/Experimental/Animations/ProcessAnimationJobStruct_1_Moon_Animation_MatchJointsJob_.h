#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Animations::ProcessAnimationJobStruct_1_Moon_Animation_MatchJointsJob_ {
    IL2CPP_REGISTER_METHOD(0x02ACB6D0, void *, GetJobReflectionData, ())
    IL2CPP_REGISTER_METHOD(0x02ACBCA0, void, ExecuteProcessAnimation, (app::MatchJointsJob * data, void * animation_stream_ptr, void * unused_ptr, app::JobRanges * ranges, int32_t job_index))
    IL2CPP_REGISTER_METHOD(0x02ACBD60, void, ExecuteProcessRootMotion, (app::MatchJointsJob * data, void * animation_stream_ptr, void * unused_ptr, app::JobRanges * ranges, int32_t job_index))
}
