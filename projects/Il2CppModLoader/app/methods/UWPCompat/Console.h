#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UWPCompat::Console {
    IL2CPP_REGISTER_METHOD(0x013DCFC0, void, WriteLine, (app::String * output))
}
