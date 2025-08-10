#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayableOutputHandle.h>
#include <Modloader/app/structs/TexturePlayableOutput__Boxed.h>

namespace app::classes::UnityEngine::Experimental::Playables::TexturePlayableOutput {
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableOutputHandle, GetHandle, app::TexturePlayableOutput__Boxed* this_ptr)
}
