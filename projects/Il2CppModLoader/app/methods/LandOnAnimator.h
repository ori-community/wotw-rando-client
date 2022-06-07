#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LandOnAnimator {
    IL2CPP_REGISTER_METHOD(0x009A6580, app::MoonTimeline *, get_OnDestroyTimeline, (app::LandOnAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonSetupVisuals *, get_MoonSetupVisuals, (app::LandOnAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F01D50, void, OnDeath, (app::LandOnAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F01D80, void, OnChangeState, (app::LandOnAnimator * this_ptr, app::LandOnState__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LandOnAnimator * this_ptr))
}
