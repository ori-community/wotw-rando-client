#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::Locale {
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String*, GetText_1, (app::String * msg))
    IL2CPP_REGISTER_METHOD(0x023AE4A0, app::String*, GetText_2, (app::String * fmt, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String*, GetText_3, (app::String * msg))
    IL2CPP_REGISTER_METHOD(0x023AE4A0, app::String*, GetText_4, (app::String * fmt, app::Object__Array* args))
} // namespace app::classes::Locale
