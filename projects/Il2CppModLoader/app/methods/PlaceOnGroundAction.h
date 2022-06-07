#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlaceOnGroundAction {
    IL2CPP_REGISTER_METHOD(0x01164B20, void, Perform, (app::PlaceOnGroundAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PlaceOnGroundAction * this_ptr))
}
