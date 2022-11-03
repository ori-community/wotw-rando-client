#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LoadingBoostController {
    IL2CPP_REGISTER_METHOD(0x00FB5980, app::LoadingBoostController_BoostModeLevel__Enum, get_CurrentLevel, ())
    IL2CPP_REGISTER_METHOD(0x00FB5A20, void, set_CurrentLevel, (app::LoadingBoostController_BoostModeLevel__Enum value))
    IL2CPP_REGISTER_METHOD(0x00FB5B00, app::LoadingBoostController_BoostModeSettings*, get_CurrentSettings, ())
    IL2CPP_REGISTER_METHOD(0x00FB5BD0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x00FB6670, void, OnFramerateTargetChanged, (double scale_factor))
    IL2CPP_REGISTER_METHOD(0x00FB6730, void, ApplyBoostModeSettings, (app::LoadingBoostController_BoostModeLevel__Enum boost_level))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoadingBoostController * this_ptr))
} // namespace app::classes::LoadingBoostController
