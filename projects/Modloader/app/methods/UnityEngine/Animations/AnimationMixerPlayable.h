#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnimationMixerPlayable__Boxed.h>
#include <Modloader/app/structs/PlayableHandle.h>
#include <Modloader/app/structs/AnimationMixerPlayable.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/Playable.h>

namespace app::classes::UnityEngine::Animations::AnimationMixerPlayable {
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::AnimationMixerPlayable__Boxed * this_ptr, app::PlayableHandle handle))
    IL2CPP_REGISTER_METHOD(0x0307D340, app::AnimationMixerPlayable, Create, (app::PlayableGraph graph, int32_t input_count, bool normalize_weights))
    IL2CPP_REGISTER_METHOD(0x0307D430, app::PlayableHandle, CreateHandle, (app::PlayableGraph graph, int32_t input_count, bool normalize_weights))
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::AnimationMixerPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307C600, app::Playable, op_Implicit, (app::AnimationMixerPlayable playable))
    IL2CPP_REGISTER_METHOD(0x00241950, bool, Equals, (app::AnimationMixerPlayable__Boxed * this_ptr, app::AnimationMixerPlayable other))
    IL2CPP_REGISTER_METHOD(0x0307D650, bool, CreateHandleInternal, (app::PlayableGraph graph, int32_t input_count, bool normalize_weights, app::PlayableHandle* handle))
    IL2CPP_REGISTER_METHOD(0x0307D750, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x0307D800, bool, CreateHandleInternal_Injected, (app::PlayableGraph * graph, int32_t input_count, bool normalize_weights, app::PlayableHandle* handle))
} // namespace app::classes::UnityEngine::Animations::AnimationMixerPlayable
