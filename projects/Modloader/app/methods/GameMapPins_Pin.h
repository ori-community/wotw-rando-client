#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameMapPins_Pin.h>

namespace app::classes::GameMapPins_Pin {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GameMapPins_Pin * this_ptr))
}
