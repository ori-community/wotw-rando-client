#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::NullConsoleDriver {
    IL2CPP_REGISTER_METHOD(0x0226F3F0, app::ConsoleKeyInfo, ReadKey, (app::NullConsoleDriver * this_ptr, bool intercept))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NullConsoleDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0226F4B0, void, cctor, ())
}
