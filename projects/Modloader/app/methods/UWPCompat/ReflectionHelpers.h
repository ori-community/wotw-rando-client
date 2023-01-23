#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BindingFlags__Enum_1.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>

namespace app::classes::UWPCompat::ReflectionHelpers {
    IL2CPP_REGISTER_METHOD(0x013DD8D0, void, BindValueConvert, (int32_t * out_flags, app::BindingFlags__Enum_1 flags, app::BindingFlags__Enum_1 from, app::BindingFlags__Enum to))
    IL2CPP_REGISTER_METHOD(0x013DD9C0, app::BindingFlags__Enum, ConvertBindingFlags, (app::BindingFlags__Enum_1 flags))
} // namespace app::classes::UWPCompat::ReflectionHelpers
