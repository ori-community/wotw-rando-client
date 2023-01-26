#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InspectorColorAttribute.h>
#include <Modloader/app/structs/Color.h>

namespace app::classes::Moon::EffectsFramework::InspectorColorAttribute {
    IL2CPP_REGISTER_METHOD(0x01980420, void, ctor, (app::InspectorColorAttribute * this_ptr, float r, float g, float b, float a))
    IL2CPP_REGISTER_METHOD(0x01746A40, app::Color, get_Color, (app::InspectorColorAttribute * this_ptr))
} // namespace app::classes::Moon::EffectsFramework::InspectorColorAttribute
