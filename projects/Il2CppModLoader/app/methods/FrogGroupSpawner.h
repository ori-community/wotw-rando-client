#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FrogGroupSpawner {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IStrippable_DoStrip, (app::FrogGroupSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01649230, void, ctor, (app::FrogGroupSpawner * this_ptr))
}
