#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::WindowsConsoleDriver {
    IL2CPP_REGISTER_METHOD(0x0314E010, void, ctor, (app::WindowsConsoleDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314E150, app::ConsoleKeyInfo, ReadKey, (app::WindowsConsoleDriver * this_ptr, bool intercept))
    IL2CPP_REGISTER_METHODINFO(0x047894D8, WindowsConsoleDriver_ReadKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0314E450, bool, IsModifierKey, (int16_t virtual_key_code))
    IL2CPP_REGISTER_METHOD(0x0314E480, void*, GetStdHandle, (app::Handles__Enum handle))
    IL2CPP_REGISTER_METHOD(0x0314E580, bool, GetConsoleScreenBufferInfo, (void* handle, app::ConsoleScreenBufferInfo* info))
    IL2CPP_REGISTER_METHOD(0x0314E680, bool, ReadConsoleInput, (void* handle, app::InputRecord* record, int32_t length, int32_t* nread))
} // namespace app::classes::System::WindowsConsoleDriver
