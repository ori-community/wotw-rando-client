#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::CinematicEffects::AmbientOcclusion_PropertyObserver {
    IL2CPP_REGISTER_METHOD(0x001F0670, bool, CheckNeedsReset, (app::AmbientOcclusion_PropertyObserver__Boxed * this_ptr, app::AmbientOcclusion_Settings * setting, app::Camera * camera))
    IL2CPP_REGISTER_METHOD(0x001F0680, void, Update, (app::AmbientOcclusion_PropertyObserver__Boxed * this_ptr, app::AmbientOcclusion_Settings * setting, app::Camera * camera))
}
