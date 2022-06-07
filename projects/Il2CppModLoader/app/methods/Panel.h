#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Panel {
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::Panel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443CC0, void, Show, (app::Panel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Panel * this_ptr))
}
