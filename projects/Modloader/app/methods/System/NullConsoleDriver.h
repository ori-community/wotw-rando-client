#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ConsoleKeyInfo.h>
#include <Modloader/app/structs/NullConsoleDriver.h>

namespace app::classes::System::NullConsoleDriver {
    IL2CPP_REGISTER_METHOD(0x0226F3F0, app::ConsoleKeyInfo, ReadKey, (app::NullConsoleDriver * this_ptr, bool intercept))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NullConsoleDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0226F4B0, void, cctor, ())
} // namespace app::classes::System::NullConsoleDriver
