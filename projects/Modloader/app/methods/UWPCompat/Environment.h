#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::UWPCompat::Environment {
    IL2CPP_REGISTER_METHOD(0x013DD000, app::String*, get_MachineName, ())
    IL2CPP_REGISTER_METHOD(0x013DD080, app::String__Array*, GetCommandLineArgs, ())
} // namespace app::classes::UWPCompat::Environment
