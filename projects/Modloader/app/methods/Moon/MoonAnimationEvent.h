#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonAnimationEvent.h>

namespace app::classes::Moon::MoonAnimationEvent {
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::MoonAnimationEvent* this_ptr)
}
