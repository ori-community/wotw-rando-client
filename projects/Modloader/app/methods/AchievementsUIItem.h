#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AchievementsUIItem.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AchievementAsset.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MessageProvider.h>

namespace app::classes::AchievementsUIItem {
    IL2CPP_REGISTER_METHOD(0x004BE060, void, Start, (app::AchievementsUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BE1E0, void, OnEnable, (app::AchievementsUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::AchievementsUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BE320, void, ValidateLock, (app::AchievementsUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BE400, bool, IsAchievementUnlocked, (app::AchievementsUIItem * this_ptr, app::String* play_fab_id))
    IL2CPP_REGISTER_METHOD(0x004BE690, bool, IsUnlocked, (app::AchievementsUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BE770, void, UnclockAchievement, (app::AchievementsUIItem * this_ptr, bool unlock))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetAchievementAsset, (app::AchievementsUIItem * this_ptr, app::AchievementAsset* asset))
    IL2CPP_REGISTER_METHOD(0x004BEBE0, void, SetIconTexture, (app::AchievementsUIItem * this_ptr, app::Texture* texture))
    IL2CPP_REGISTER_METHOD(0x004B4010, void, AssignIconTextures, (app::AchievementsUIItem * this_ptr, app::Texture* locked, app::Texture* unlocked))
    IL2CPP_REGISTER_METHOD(0x004BEC90, void, SetIconColor, (app::AchievementsUIItem * this_ptr, app::Color color))
    IL2CPP_REGISTER_METHOD(0x004BED80, void, SetNameTextProvider, (app::AchievementsUIItem * this_ptr, app::MessageProvider* message_provider))
    IL2CPP_REGISTER_METHOD(0x004BEE60, void, SetDescriptionTextProvider, (app::AchievementsUIItem * this_ptr, app::MessageProvider* message_provider))
    IL2CPP_REGISTER_METHOD(0x004BEF40, void, AssignComponents, (app::AchievementsUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BF3A0, void, SetTextRenderOrder, (app::AchievementsUIItem * this_ptr, float z_offset))
    IL2CPP_REGISTER_METHOD(0x004BF4E0, void, ctor, (app::AchievementsUIItem * this_ptr))
} // namespace app::classes::AchievementsUIItem
