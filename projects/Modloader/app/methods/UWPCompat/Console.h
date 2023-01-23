#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UWPCompat::Console {
    IL2CPP_REGISTER_METHOD(0x013DCFC0, void, WriteLine, (app::String * output))
}
