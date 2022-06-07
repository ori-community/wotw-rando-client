#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Game::Items {
    IL2CPP_REGISTER_METHOD(0x01525C20, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01525D70, void, cctor, ())
}
