#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AudioBehaviour.h>

namespace app::classes::UnityEngine::AudioBehaviour {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AudioBehaviour * this_ptr))
}
