#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WaterDebrisModifier {
    IL2CPP_REGISTER_METHOD(0x008D61D0, void, SetProperties, (app::WaterDebrisModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D6290, void, ctor, (app::WaterDebrisModifier * this_ptr))
}
