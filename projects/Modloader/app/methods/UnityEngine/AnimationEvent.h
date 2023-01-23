#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnimationEvent.h>

namespace app::classes::UnityEngine::AnimationEvent {
    IL2CPP_REGISTER_METHOD(0x0307BF90, void, ctor, (app::AnimationEvent * this_ptr))
}
