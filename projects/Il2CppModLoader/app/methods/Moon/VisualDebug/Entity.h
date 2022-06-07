#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::VisualDebug::Entity {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::Entity_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011927A0, void, ctor_2, (app::Entity_1 * this_ptr, app::Color color))
    IL2CPP_REGISTER_METHOD(0x011927B0, bool, Equals_1, (app::Entity_1 * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01192920, bool, Equals_2, (app::Entity_1 * this_ptr, app::IRenderEntity * other))
}
