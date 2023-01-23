#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PlayableOutputHandle.h>

namespace app::classes::UnityEngine::Animations::AnimationPlayableGraphExtensions {
    IL2CPP_REGISTER_METHOD(0x0307DD00, bool, InternalCreateAnimationOutput, (app::PlayableGraph * graph, app::String* name, app::PlayableOutputHandle* handle))
}
