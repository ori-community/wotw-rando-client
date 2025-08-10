#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationLayerMixerPlayable.h>
#include <Modloader/app/structs/AnimationLayerMixerPlayable__Boxed.h>
#include <Modloader/app/structs/AvatarMask.h>
#include <Modloader/app/structs/Playable.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/PlayableHandle.h>

namespace app::classes::UnityEngine::Animations::AnimationLayerMixerPlayable {
    IL2CPP_REGISTER_METHOD(0x002417B0, void, ctor, app::AnimationLayerMixerPlayable__Boxed* this_ptr, app::PlayableHandle handle)
    IL2CPP_REGISTER_METHOD(0x0307C9A0, app::AnimationLayerMixerPlayable, Create, app::PlayableGraph graph, int32_t input_count)
    IL2CPP_REGISTER_METHOD(0x0307CA90, app::PlayableHandle, CreateHandle, app::PlayableGraph graph, int32_t input_count)
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, app::AnimationLayerMixerPlayable__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0307C600, app::Playable, op_Implicit, app::AnimationLayerMixerPlayable playable)
    IL2CPP_REGISTER_METHOD(0x002417D0, bool, Equals, app::AnimationLayerMixerPlayable__Boxed* this_ptr, app::AnimationLayerMixerPlayable other)
    IL2CPP_REGISTER_METHOD(0x00241930, void, SetLayerAdditive, app::AnimationLayerMixerPlayable__Boxed* this_ptr, uint32_t layer_index, bool value)
    IL2CPP_REGISTER_METHOD(
        0x00241940,
        void,
        SetLayerMaskFromAvatarMask,
        app::AnimationLayerMixerPlayable__Boxed* this_ptr,
        uint32_t layer_index,
        app::AvatarMask* mask
    )
    IL2CPP_REGISTER_METHOD(0x0307D040, bool, CreateHandleInternal, app::PlayableGraph graph, app::PlayableHandle* handle)
    IL2CPP_REGISTER_METHOD(0x0307D130, void, SetLayerAdditiveInternal, app::PlayableHandle* handle, uint32_t layer_index, bool value)
    IL2CPP_REGISTER_METHOD(0x0307D1A0, void, SetLayerMaskFromAvatarMaskInternal, app::PlayableHandle* handle, uint32_t layer_index, app::AvatarMask* mask)
    IL2CPP_REGISTER_METHOD(0x0307D210, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x0307D2E0, bool, CreateHandleInternal_Injected, app::PlayableGraph* graph, app::PlayableHandle* handle)
} // namespace app::classes::UnityEngine::Animations::AnimationLayerMixerPlayable
