#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_.h>
#include <Modloader/app/structs/AnimatorPostprocessUpdateData.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/NativeArray_1_System_Single_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Experimental_Animations_TransformStreamHandle_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/Playable.h>
#include <Modloader/app/structs/PlayableGraph.h>

namespace app::classes::Moon::Animation::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ {
    IL2CPP_REGISTER_METHOD(0x0154A430, void, DisposeIfCreated_1, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr, app::NativeArray_1_UnityEngine_Quaternion_* array))
    IL2CPP_REGISTER_METHOD(0x0154A430, void, DisposeIfCreated_2, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr, app::NativeArray_1_System_Single_* array))
    IL2CPP_REGISTER_METHOD(0x0154A430, void, DisposeIfCreated_3, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr, app::NativeArray_1_UnityEngine_Experimental_Animations_TransformStreamHandle_* array))
    IL2CPP_REGISTER_METHOD(0x019FBE40, void, ctor, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019FB8A0, bool, get_IsActive, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAllowed, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019FB940, app::Playable, ConstructPlayable, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr, app::PlayableGraph playable_graph))
    IL2CPP_REGISTER_METHOD(0x019FBAE0, void, AddToAnimator, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr, app::MoonAnimator* animator, float blend_in_duration))
    IL2CPP_REGISTER_METHOD(0x019FBB10, void, RemoveFromAnimator, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr, float blend_out_duration))
    IL2CPP_REGISTER_METHOD(0x019FBB40, void, OnAddedToAnimator, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr, app::MoonAnimator* animator, app::Playable playable))
    IL2CPP_REGISTER_METHOD(0x019FBB60, void, OnRemovedFromAnimator, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019FBB80, void, UpdateAnimatorPostprocessData, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr, app::Playable playable, app::AnimatorPostprocessUpdateData update_data))
    IL2CPP_REGISTER_METHOD(0x019FBE10, void, OnDestroy, (app::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_ * this_ptr))
} // namespace app::classes::Moon::Animation::JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob_
