#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EnvironmentTintModifier {
    IL2CPP_REGISTER_METHOD(0x00CAA750, int32_t, GetEnvTintColorID, (app::EnvironmentTintModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CAA820, void, BindNow, (app::EnvironmentTintModifier * this_ptr, app::EnvironmentLight * character_light, int32_t index, bool cur_light))
    IL2CPP_REGISTER_METHOD(0x00CAAA60, void, ClearBind, (app::EnvironmentTintModifier * this_ptr, int32_t num))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateBaseBind, (app::EnvironmentTintModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CAAB00, app::String *, GetBaseShaderProperties, (app::EnvironmentTintModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CAABA0, void, SetProperties, (app::EnvironmentTintModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CAAC60, void, ctor, (app::EnvironmentTintModifier * this_ptr))
}
