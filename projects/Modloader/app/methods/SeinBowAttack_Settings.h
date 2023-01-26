#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinBowAttack_Settings.h>

namespace app::classes::SeinBowAttack_Settings {
    IL2CPP_REGISTER_METHOD(0x00DA1520, void, ctor, (app::SeinBowAttack_Settings * this_ptr))
}
