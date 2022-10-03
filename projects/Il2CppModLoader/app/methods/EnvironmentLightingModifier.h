#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::EnvironmentLightingModifier {
    IL2CPP_REGISTER_METHOD(0x00CA8BA0, void, OnEnable, (app::EnvironmentLightingModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA8C00, void, BindNow, (app::EnvironmentLightingModifier * this_ptr, app::EnvironmentLight* character_light, int32_t index, bool cur_light))
    IL2CPP_REGISTER_METHOD(0x00CA9440, void, UpdateBaseBind, (app::EnvironmentLightingModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA9450, void, ClearBind, (app::EnvironmentLightingModifier * this_ptr, int32_t num))
    IL2CPP_REGISTER_METHOD(0x00CA9510, void, UpdateFilterBind, (app::EnvironmentLightingModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA9960, app::String*, GetBaseShaderProperties, (app::EnvironmentLightingModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA9A00, void, SetProperties, (app::EnvironmentLightingModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA9AF0, void, ctor, (app::EnvironmentLightingModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA9D30, void, cctor, ())
} // namespace app::classes::EnvironmentLightingModifier
