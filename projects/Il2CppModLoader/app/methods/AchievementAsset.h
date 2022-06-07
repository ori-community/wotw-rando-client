#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AchievementAsset {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String *, get_Name, (app::AchievementAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String *, get_PlayFabIdentifier, (app::AchievementAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Texture *, get_Icon, (app::AchievementAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Texture *, get_LockedIcon, (app::AchievementAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_Hidden, (app::AchievementAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B4010, void, SetIcons, (app::AchievementAsset * this_ptr, app::Texture * icon, app::Texture * locked_icon))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, SetIdentifier, (app::AchievementAsset * this_ptr, app::String * identifier))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::AchievementAsset * this_ptr))
}
