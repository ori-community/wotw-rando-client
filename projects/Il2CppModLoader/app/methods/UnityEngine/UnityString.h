#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UnityString {
    IL2CPP_REGISTER_METHOD(0x031BB830, app::String *, Format, (app::String * fmt, app::Object__Array * args))
}
