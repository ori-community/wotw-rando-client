#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationPlayableOutput.h>
#include <Modloader/app/structs/AnimationLayerMixerPlayable.h>
#include <Modloader/app/structs/Playable.h>

namespace app::classes::UnityEngine::Playables::PlayableOutputExtensions {
    IL2CPP_REGISTER_METHOD(0x015E6720, void, SetSourcePlayable_1, (app::AnimationPlayableOutput output, app::AnimationLayerMixerPlayable value))
    IL2CPP_REGISTER_METHOD(0x015E6720, void, SetSourcePlayable_2, (app::AnimationPlayableOutput output, app::Playable value))
    IL2CPP_REGISTER_METHOD(0x015E6700, void, SetSourceOutputPort, (app::AnimationPlayableOutput output, int32_t value))
} // namespace app::classes::UnityEngine::Playables::PlayableOutputExtensions
