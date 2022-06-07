#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EnvironmentLightTexture {
    IL2CPP_REGISTER_METHOD(0x00CA7DB0, app::Vector2, Rotate, (app::Vector2 v, float degrees))
    IL2CPP_REGISTER_METHOD(0x00CA7EB0, void, BindToMaterial, (app::EnvironmentLightTexture * this_ptr, app::Material * bind_material, int32_t light, float random_offset, int32_t num))
    IL2CPP_REGISTER_METHOD(0x00CA8430, app::Vector4, GetTurbVec, (app::EnvironmentLightTexture * this_ptr, float random_offset))
    IL2CPP_REGISTER_METHOD(0x00CA8450, app::Vector4, GetTurbScaleVec, (app::EnvironmentLightTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA8470, void, ctor, (app::EnvironmentLightTexture * this_ptr))
}
