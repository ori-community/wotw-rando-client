#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Animations::AnimationPlayableGraphExtensions {
    IL2CPP_REGISTER_METHOD(0x0307DD00, bool, InternalCreateAnimationOutput, (app::PlayableGraph * graph, app::String * name, app::PlayableOutputHandle * handle))
}
