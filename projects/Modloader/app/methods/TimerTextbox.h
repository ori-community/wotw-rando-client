#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimerTextbox.h>

namespace app::classes::TimerTextbox {
    IL2CPP_REGISTER_METHOD(0x010F8C60, void, OnDestroy, (app::TimerTextbox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F8E50, void, Update, (app::TimerTextbox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E21060, void, OnTimeoutPulse, (app::TimerTextbox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimerTextbox * this_ptr))
} // namespace app::classes::TimerTextbox
