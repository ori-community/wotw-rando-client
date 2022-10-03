#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpiritLightVisualAffectorManager {
    IL2CPP_REGISTER_METHOD(0x00D63300, void, OnEnable, (app::SpiritLightVisualAffectorManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D635C0, void, Update, (app::SpiritLightVisualAffectorManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724010, void, SetDarknessOverride, (app::SpiritLightVisualAffectorManager * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00AFBB00, void, LateUpdate, (app::SpiritLightVisualAffectorManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiritLightVisualAffectorManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D641F0, void, cctor, ())
} // namespace app::classes::SpiritLightVisualAffectorManager
