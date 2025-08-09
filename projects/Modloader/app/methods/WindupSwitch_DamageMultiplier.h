#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WindupSwitch_DamageMultiplier.h>

namespace app::classes::WindupSwitch_DamageMultiplier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WindupSwitch_DamageMultiplier* this_ptr)
}
