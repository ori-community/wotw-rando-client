#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Shelf {
    IL2CPP_REGISTER_METHOD(0x005B20A0, app::GridObject *, get_CurrentGridObject, (app::Shelf * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B2160, void, set_CurrentGridObject, (app::Shelf * this_ptr, app::GridObject * value))
    IL2CPP_REGISTER_METHOD(0x005B2220, void, ctor, (app::Shelf * this_ptr))
}
