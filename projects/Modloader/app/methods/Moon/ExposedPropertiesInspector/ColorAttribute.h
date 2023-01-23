#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ColorAttribute_1.h>
#include <Modloader/app/structs/Color.h>

namespace app::classes::Moon::ExposedPropertiesInspector::ColorAttribute {
    IL2CPP_REGISTER_METHOD(0x01980420, void, ctor, (app::ColorAttribute_1 * this_ptr, float r, float g, float b, float a))
    IL2CPP_REGISTER_METHOD(0x01746A40, app::Color, get_Color, (app::ColorAttribute_1 * this_ptr))
} // namespace app::classes::Moon::ExposedPropertiesInspector::ColorAttribute
