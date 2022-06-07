#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ExposedPropertiesInspector::ColorAttribute {
    IL2CPP_REGISTER_METHOD(0x01980420, void, ctor, (app::ColorAttribute_1 * this_ptr, float r, float g, float b, float a))
    IL2CPP_REGISTER_METHOD(0x01746A40, app::Color, get_Color, (app::ColorAttribute_1 * this_ptr))
}
