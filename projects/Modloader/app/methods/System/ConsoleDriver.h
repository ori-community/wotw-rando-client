#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ConsoleDriver {
    IL2CPP_REGISTER_METHOD(0x020349F0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02034A90, app::IConsoleDriver*, CreateNullConsoleDriver, ())
    IL2CPP_REGISTER_METHOD(0x02034BD0, app::IConsoleDriver*, CreateWindowsConsoleDriver, ())
    IL2CPP_REGISTER_METHOD(0x02034E10, app::IConsoleDriver*, CreateTermInfoDriver, (app::String * term))
    IL2CPP_REGISTER_METHOD(0x02034F60, app::ConsoleKeyInfo, ReadKey, (bool intercept))
    IL2CPP_REGISTER_METHOD(0x020350B0, bool, get_IsConsole, ())
    IL2CPP_REGISTER_METHOD(0x020352A0, bool, Isatty, (void* handle))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, InternalKeyAvailable, (int32_t ms_timeout))
    IL2CPP_REGISTER_METHOD(0x020352C0, bool, TtySetup, (app::String * keypad_xmit, app::String* teardown, app::Byte__Array** control_characters, app::int32_t** address))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, SetEcho, (bool want_echo))
} // namespace app::classes::System::ConsoleDriver
