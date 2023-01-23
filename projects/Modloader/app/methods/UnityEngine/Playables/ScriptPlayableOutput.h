#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayableOutputHandle.h>
#include <Modloader/app/structs/ScriptPlayableOutput__Boxed.h>

namespace app::classes::UnityEngine::Playables::ScriptPlayableOutput {
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableOutputHandle, GetHandle, (app::ScriptPlayableOutput__Boxed * this_ptr))
}
