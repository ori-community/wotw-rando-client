#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationScriptPlayable.h>
#include <Modloader/app/structs/AnimationScriptPlayable__Boxed.h>
#include <Modloader/app/structs/DelayJointPostprocessJob.h>
#include <Modloader/app/structs/MatchJointsJob.h>
#include <Modloader/app/structs/Playable.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/PlayableHandle.h>

namespace app::classes::UnityEngine::Experimental::Animations::AnimationScriptPlayable {
    IL2CPP_REGISTER_METHOD(0x00242700, void, ctor, app::AnimationScriptPlayable__Boxed* this_ptr, app::PlayableHandle handle)
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, app::AnimationScriptPlayable__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307C600, app::Playable, op_Implicit, app::AnimationScriptPlayable playable)
    IL2CPP_REGISTER_METHOD(0x03086610, app::AnimationScriptPlayable, op_Explicit, app::Playable playable)
    IL2CPP_REGISTER_METHOD(0x00242720, bool, Equals, app::AnimationScriptPlayable__Boxed* this_ptr, app::AnimationScriptPlayable other)
    IL2CPP_REGISTER_METHOD(0x03086650, bool, CreateHandleInternal, app::PlayableGraph graph, app::PlayableHandle* handle, void* job_reflection_data)
    IL2CPP_REGISTER_METHOD(0x03086740, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x03086810, bool, CreateHandleInternal_Injected, app::PlayableGraph* graph, app::PlayableHandle* handle, void* job_reflection_data)
    IL2CPP_REGISTER_METHOD(0x0012E910, void, CheckJobTypeValidity_1, app::AnimationScriptPlayable__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0012EA90, void, SetJobData_1, app::AnimationScriptPlayable__Boxed* this_ptr, app::DelayJointPostprocessJob job_data)
    IL2CPP_REGISTER_METHOD(0x0012EAE0, void, SetJobData_2, app::AnimationScriptPlayable__Boxed* this_ptr, app::MatchJointsJob job_data)
    IL2CPP_REGISTER_METHOD(0x0012E610, void, CheckJobTypeValidity_2, app::AnimationScriptPlayable__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0012E790, void, CheckJobTypeValidity_3, app::AnimationScriptPlayable__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FF7A00,
        app::AnimationScriptPlayable,
        Create_1,
        app::PlayableGraph graph,
        app::DelayJointPostprocessJob job_data,
        int32_t input_count
    )
    IL2CPP_REGISTER_METHOD(0x02FF7B70, app::AnimationScriptPlayable, Create_2, app::PlayableGraph graph, app::MatchJointsJob job_data, int32_t input_count)
    IL2CPP_REGISTER_METHOD(0x02FF80B0, app::PlayableHandle, CreateHandle_1, app::PlayableGraph graph, int32_t input_count)
    IL2CPP_REGISTER_METHOD(0x02FF82D0, app::PlayableHandle, CreateHandle_2, app::PlayableGraph graph, int32_t input_count)
} // namespace app::classes::UnityEngine::Experimental::Animations::AnimationScriptPlayable
