#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConsoleKeyInfo.h>
#include <Modloader/app/structs/ConsoleKeyInfo__Boxed.h>
#include <Modloader/app/structs/ConsoleKey__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ConsoleKeyInfo {
    IL2CPP_REGISTER_METHOD(
        0x001DBE50,
        void,
        ctor,
        app::ConsoleKeyInfo__Boxed* this_ptr,
        char16_t key_char,
        app::ConsoleKey__Enum key,
        bool shift,
        bool alt,
        bool control
    )
    IL2CPP_REGISTER_METHOD(0x00113CC0, char16_t, get_KeyChar, app::ConsoleKeyInfo__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113CE0, app::ConsoleKey__Enum, get_Key, app::ConsoleKeyInfo__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DBE70, bool, Equals_1, app::ConsoleKeyInfo__Boxed* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x001DBF70, bool, Equals_2, app::ConsoleKeyInfo__Boxed* this_ptr, app::ConsoleKeyInfo obj)
    IL2CPP_REGISTER_METHOD(0x001DBFC0, int32_t, GetHashCode, app::ConsoleKeyInfo__Boxed* this_ptr)
} // namespace app::classes::System::ConsoleKeyInfo
