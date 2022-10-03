#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpiritLightRadialVisualAffector {
    IL2CPP_REGISTER_METHOD(0x00D626B0, app::Vector3, get_Position, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D62760, float, get_LightIntensityInThisFrame, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D627A0, float, get_LightRadiusInThisFrame, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D627E0, void, ResetStaticsAll, ())
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, IsVisibleInCamera, (app::SpiritLightRadialVisualAffector * this_ptr, app::GameplayCamera* gameplay_camera))
    IL2CPP_REGISTER_METHOD(0x00D628C0, void, OnEnable, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D62960, void, OnDisable, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D62A10, void, OnActivate, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D62B80, void, OnDeactivate, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D62C40, void, OnFrustumEnter, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D62C60, void, OnFrustumExit, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_InsideFrustum, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675C70, void, set_InsideFrustum, (app::SpiritLightRadialVisualAffector * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00D62C80, app::Bounds, get_Bounds, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D62D10, void, ctor, (app::SpiritLightRadialVisualAffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D62D40, void, cctor, ())
} // namespace app::classes::SpiritLightRadialVisualAffector
