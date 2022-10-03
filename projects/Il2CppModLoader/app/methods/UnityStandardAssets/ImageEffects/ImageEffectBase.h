#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::ImageEffectBase {
    IL2CPP_REGISTER_METHOD(0x02D59FA0, void, Start, (app::ImageEffectBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5A170, app::Material*, get_material, (app::ImageEffectBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D5A350, void, OnDisable, (app::ImageEffectBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ImageEffectBase * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::ImageEffectBase
