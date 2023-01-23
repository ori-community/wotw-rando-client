#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ElapsedEventArgs.h>
#include <Modloader/app/structs/DateTime.h>

namespace app::classes::System::Timers::ElapsedEventArgs {
    IL2CPP_REGISTER_METHOD(0x02A7AE30, void, ctor, (app::ElapsedEventArgs * this_ptr, app::DateTime time))
}
