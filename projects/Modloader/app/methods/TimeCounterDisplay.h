#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimeCounterDisplay.h>

namespace app::classes::TimeCounterDisplay {
    IL2CPP_REGISTER_METHOD(0x010ED820, void, Update, (app::TimeCounterDisplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimeCounterDisplay * this_ptr))
} // namespace app::classes::TimeCounterDisplay
