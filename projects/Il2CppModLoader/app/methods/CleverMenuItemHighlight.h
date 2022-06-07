#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CleverMenuItemHighlight {
    IL2CPP_REGISTER_METHOD(0x012B3AF0, void, Start, (app::CleverMenuItemHighlight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012B3B80, void, FixedUpdate, (app::CleverMenuItemHighlight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CleverMenuItemHighlight * this_ptr))
}
