#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinWeaponsEffects.h>

namespace app::classes::SeinWeaponsEffects {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinWeaponsEffects * this_ptr))
}
