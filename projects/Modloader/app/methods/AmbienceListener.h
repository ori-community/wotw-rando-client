#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AmbienceListener.h>

namespace app::classes::AmbienceListener {
    IL2CPP_REGISTER_METHOD(0x004F6DB0, void, FixedUpdate, (app::AmbienceListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AmbienceListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F71F0, void, cctor, ())
} // namespace app::classes::AmbienceListener
