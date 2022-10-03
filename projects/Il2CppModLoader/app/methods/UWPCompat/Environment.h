#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UWPCompat::Environment {
    IL2CPP_REGISTER_METHOD(0x013DD000, app::String*, get_MachineName, ())
    IL2CPP_REGISTER_METHOD(0x013DD080, app::String__Array*, GetCommandLineArgs, ())
} // namespace app::classes::UWPCompat::Environment
