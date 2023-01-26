#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BloodVFXPair.h>

namespace app::classes::BloodVFXPair {
    IL2CPP_REGISTER_METHOD(0x00D34AF0, void, ctor, (app::BloodVFXPair * this_ptr))
}
