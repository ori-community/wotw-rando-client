#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DirectionalLightModifierExtra {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (app::DirectionalLightModifierExtra * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00B94930, void, SetProperties, (app::DirectionalLightModifierExtra * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B94B10, void, ctor, (app::DirectionalLightModifierExtra * this_ptr))
}
