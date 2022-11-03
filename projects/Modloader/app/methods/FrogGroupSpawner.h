#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FrogGroupSpawner {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IStrippable_DoStrip, (app::FrogGroupSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01649230, void, ctor, (app::FrogGroupSpawner * this_ptr))
} // namespace app::classes::FrogGroupSpawner
