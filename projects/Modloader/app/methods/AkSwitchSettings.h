#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkSwitchSettings.h>

namespace app::classes::AkSwitchSettings {
    IL2CPP_REGISTER_METHOD(0x026FC920, void, ctor, (app::AkSwitchSettings * this_ptr))
}
