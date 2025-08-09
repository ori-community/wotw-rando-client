#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Animation.h>
#include <Modloader/app/structs/AnimationClip.h>
#include <Modloader/app/structs/AnimationCullingType__Enum.h>
#include <Modloader/app/structs/AnimationPlayMode__Enum.h>
#include <Modloader/app/structs/AnimationState.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/PlayMode__Enum.h>
#include <Modloader/app/structs/QueueMode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WrapMode__Enum.h>

namespace app::classes::UnityEngine::Animation {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03079E00, app::AnimationClip*, get_clip, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03079E50, void, set_clip, app::Animation* this_ptr, app::AnimationClip* value)
    IL2CPP_REGISTER_METHOD(0x03079EB0, bool, get_playAutomatically, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03079F00, void, set_playAutomatically, app::Animation* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03079F60, app::WrapMode__Enum, get_wrapMode, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03079FB0, void, set_wrapMode, app::Animation* this_ptr, app::WrapMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x0307A010, void, Stop_1, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307A010, void, INTERNAL_CALL_Stop, app::Animation* self)
    IL2CPP_REGISTER_METHOD(0x0307A060, void, Stop_2, app::Animation* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307A060, void, Internal_StopByName, app::Animation* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307A0C0, void, Rewind_1, app::Animation* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307A0C0, void, Internal_RewindByName, app::Animation* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307A120, void, Rewind_2, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307A120, void, INTERNAL_CALL_Rewind, app::Animation* self)
    IL2CPP_REGISTER_METHOD(0x0307A170, void, Sample, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307A170, void, INTERNAL_CALL_Sample, app::Animation* self)
    IL2CPP_REGISTER_METHOD(0x0307A1C0, bool, get_isPlaying, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307A210, bool, IsPlaying, app::Animation* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307A270, app::AnimationState*, get_Item, app::Animation* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307A2D0, bool, Play_1, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307A330, bool, Play_2, app::Animation* this_ptr, app::PlayMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x0307A390, bool, Play_3, app::Animation* this_ptr, app::String* animation, app::PlayMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x0307A400, bool, Play_4, app::Animation* this_ptr, app::String* animation)
    IL2CPP_REGISTER_METHOD(0x0307A410, void, CrossFade_1, app::Animation* this_ptr, app::String* animation, float fade_length, app::PlayMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x0307A490, void, CrossFade_2, app::Animation* this_ptr, app::String* animation, float fade_length)
    IL2CPP_REGISTER_METHOD(0x0307A4B0, void, CrossFade_3, app::Animation* this_ptr, app::String* animation)
    IL2CPP_REGISTER_METHOD(0x0307A4E0, void, Blend_1, app::Animation* this_ptr, app::String* animation, float target_weight, float fade_length)
    IL2CPP_REGISTER_METHOD(0x0307A560, void, Blend_2, app::Animation* this_ptr, app::String* animation, float target_weight)
    IL2CPP_REGISTER_METHOD(0x0307A580, void, Blend_3, app::Animation* this_ptr, app::String* animation)
    IL2CPP_REGISTER_METHOD(
        0x0307A5B0,
        app::AnimationState*,
        CrossFadeQueued_1,
        app::Animation* this_ptr,
        app::String* animation,
        float fade_length,
        app::QueueMode__Enum queue,
        app::PlayMode__Enum mode
    )
    IL2CPP_REGISTER_METHOD(
        0x0307A640,
        app::AnimationState*,
        CrossFadeQueued_2,
        app::Animation* this_ptr,
        app::String* animation,
        float fade_length,
        app::QueueMode__Enum queue
    )
    IL2CPP_REGISTER_METHOD(0x0307A660, app::AnimationState*, CrossFadeQueued_3, app::Animation* this_ptr, app::String* animation, float fade_length)
    IL2CPP_REGISTER_METHOD(0x0307A680, app::AnimationState*, CrossFadeQueued_4, app::Animation* this_ptr, app::String* animation)
    IL2CPP_REGISTER_METHOD(
        0x0307A6B0,
        app::AnimationState*,
        PlayQueued_1,
        app::Animation* this_ptr,
        app::String* animation,
        app::QueueMode__Enum queue,
        app::PlayMode__Enum mode
    )
    IL2CPP_REGISTER_METHOD(0x0307A730, app::AnimationState*, PlayQueued_2, app::Animation* this_ptr, app::String* animation, app::QueueMode__Enum queue)
    IL2CPP_REGISTER_METHOD(0x0307A750, app::AnimationState*, PlayQueued_3, app::Animation* this_ptr, app::String* animation)
    IL2CPP_REGISTER_METHOD(0x0307A770, void, AddClip_1, app::Animation* this_ptr, app::AnimationClip* clip, app::String* new_name)
    IL2CPP_REGISTER_METHOD(
        0x0307A800,
        void,
        AddClip_2,
        app::Animation* this_ptr,
        app::AnimationClip* clip,
        app::String* new_name,
        int32_t first_frame,
        int32_t last_frame,
        bool add_loop_frame
    )
    IL2CPP_REGISTER_METHOD(
        0x0307A890,
        void,
        AddClip_3,
        app::Animation* this_ptr,
        app::AnimationClip* clip,
        app::String* new_name,
        int32_t first_frame,
        int32_t last_frame
    )
    IL2CPP_REGISTER_METHOD(0x0307A920, void, RemoveClip_1, app::Animation* this_ptr, app::AnimationClip* clip)
    IL2CPP_REGISTER_METHOD(0x0307A980, void, RemoveClip_2, app::Animation* this_ptr, app::String* clip_name)
    IL2CPP_REGISTER_METHOD(0x0307A9E0, int32_t, GetClipCount, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307A980, void, RemoveClip2, app::Animation* this_ptr, app::String* clip_name)
    IL2CPP_REGISTER_METHOD(0x0307A330, bool, PlayDefaultAnimation, app::Animation* this_ptr, app::PlayMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x0307A330, bool, Play_5, app::Animation* this_ptr, app::AnimationPlayMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x0307AA30, bool, Play_6, app::Animation* this_ptr, app::String* animation, app::AnimationPlayMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x0307AA40, void, SyncLayer, app::Animation* this_ptr, int32_t layer)
    IL2CPP_REGISTER_METHOD(0x0307AA40, void, INTERNAL_CALL_SyncLayer, app::Animation* self, int32_t layer)
    IL2CPP_REGISTER_METHOD(0x0307AAA0, app::IEnumerator*, GetEnumerator, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307A270, app::AnimationState*, GetState, app::Animation* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307ABF0, app::AnimationState*, GetStateAtIndex, app::Animation* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0307AC50, int32_t, GetStateCount, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307ACA0, app::AnimationClip*, GetClip, app::Animation* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0307AD70, bool, get_animatePhysics, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307ADC0, void, set_animatePhysics, app::Animation* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0307AE20, bool, get_animateOnlyIfVisible, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307AE70, void, set_animateOnlyIfVisible, app::Animation* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0307AED0, app::AnimationCullingType__Enum, get_cullingType, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307AF20, void, set_cullingType, app::Animation* this_ptr, app::AnimationCullingType__Enum value)
    IL2CPP_REGISTER_METHOD(0x0307AF80, app::Bounds, get_localBounds, app::Animation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307B010, void, set_localBounds, app::Animation* this_ptr, app::Bounds value)
    IL2CPP_REGISTER_METHOD(0x0307B070, void, INTERNAL_get_localBounds, app::Animation* this_ptr, app::Bounds* value)
    IL2CPP_REGISTER_METHOD(0x0307B0D0, void, INTERNAL_set_localBounds, app::Animation* this_ptr, app::Bounds* value)
} // namespace app::classes::UnityEngine::Animation
