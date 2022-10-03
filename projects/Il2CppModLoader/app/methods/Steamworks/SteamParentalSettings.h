#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Steamworks::SteamParentalSettings {
    IL2CPP_REGISTER_METHOD(0x0278E930, bool, BIsParentalLockEnabled, ())
    IL2CPP_REGISTER_METHOD(0x0278E9E0, bool, BIsParentalLockLocked, ())
    IL2CPP_REGISTER_METHOD(0x0278EA90, bool, BIsAppBlocked, (app::AppId_t n_app_i_d))
    IL2CPP_REGISTER_METHOD(0x0278EB50, bool, BIsAppInBlockList, (app::AppId_t n_app_i_d))
    IL2CPP_REGISTER_METHOD(0x0278EC10, bool, BIsFeatureBlocked, (app::EParentalFeature__Enum e_feature))
    IL2CPP_REGISTER_METHOD(0x0278ECD0, bool, BIsFeatureInBlockList, (app::EParentalFeature__Enum e_feature))
} // namespace app::classes::Steamworks::SteamParentalSettings
