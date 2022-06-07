#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Playables::PlayableOutputExtensions {
    IL2CPP_REGISTER_METHOD(0x015E6720, void, SetSourcePlayable_1, (app::AnimationPlayableOutput output, app::AnimationLayerMixerPlayable value))
    IL2CPP_REGISTER_METHODINFO(0x04739F08, PlayableOutputExtensions_SetSourcePlayable__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6720, void, SetSourcePlayable_2, (app::AnimationPlayableOutput output, app::Playable value))
    IL2CPP_REGISTER_METHODINFO(0x04709298, PlayableOutputExtensions_SetSourcePlayable_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6700, void, SetSourceOutputPort, (app::AnimationPlayableOutput output, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04736F78, PlayableOutputExtensions_SetSourceOutputPort__MethodInfo)
}
