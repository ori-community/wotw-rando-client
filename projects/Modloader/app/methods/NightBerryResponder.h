#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NightBerryResponder.h>

namespace app::classes::NightBerryResponder {
    IL2CPP_REGISTER_METHOD(0x006013B0, void, FixedUpdate, app::NightBerryResponder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::NightBerryResponder* this_ptr)
} // namespace app::classes::NightBerryResponder
