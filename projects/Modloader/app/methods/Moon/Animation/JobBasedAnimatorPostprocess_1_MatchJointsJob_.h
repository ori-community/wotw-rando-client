#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Animation::JobBasedAnimatorPostprocess_1_MatchJointsJob_ {
    IL2CPP_REGISTER_METHOD(0x019FC330, void, ctor, (app::JobBasedAnimatorPostprocess_1_MatchJointsJob_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04723078, JobBasedAnimatorPostprocess_1_MatchJointsJob___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019FBED0, bool, get_IsActive, (app::JobBasedAnimatorPostprocess_1_MatchJointsJob_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAllowed, (app::JobBasedAnimatorPostprocess_1_MatchJointsJob_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019FBF70, app::Playable, ConstructPlayable, (app::JobBasedAnimatorPostprocess_1_MatchJointsJob_ * this_ptr, app::PlayableGraph playable_graph))
    IL2CPP_REGISTER_METHOD(0x019FBAE0, void, AddToAnimator, (app::JobBasedAnimatorPostprocess_1_MatchJointsJob_ * this_ptr, app::MoonAnimator* animator, float blend_in_duration))
    IL2CPP_REGISTER_METHOD(0x019FBB10, void, RemoveFromAnimator, (app::JobBasedAnimatorPostprocess_1_MatchJointsJob_ * this_ptr, float blend_out_duration))
    IL2CPP_REGISTER_METHOD(0x019FBB40, void, OnAddedToAnimator, (app::JobBasedAnimatorPostprocess_1_MatchJointsJob_ * this_ptr, app::MoonAnimator* animator, app::Playable playable))
    IL2CPP_REGISTER_METHOD(0x019FBB60, void, OnRemovedFromAnimator, (app::JobBasedAnimatorPostprocess_1_MatchJointsJob_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019FC0A0, void, UpdateAnimatorPostprocessData, (app::JobBasedAnimatorPostprocess_1_MatchJointsJob_ * this_ptr, app::Playable playable, app::AnimatorPostprocessUpdateData update_data))
    IL2CPP_REGISTER_METHOD(0x019FBE10, void, OnDestroy, (app::JobBasedAnimatorPostprocess_1_MatchJointsJob_ * this_ptr))
} // namespace app::classes::Moon::Animation::JobBasedAnimatorPostprocess_1_MatchJointsJob_
