#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XblAchievement__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Grdk::AchievementUploader {
    IL2CPP_REGISTER_METHOD(0x01083270, app::XblAchievement__Array*, get_Achievements, ())
    IL2CPP_REGISTER_METHOD(0x01083310, void, PublishAchievementProgress, (app::String * achievement_id, int32_t progress))
    IL2CPP_REGISTER_METHOD(0x01083570, void, Uploaded, (int32_t result))
    IL2CPP_REGISTER_METHODINFO(0x04794ED8, AchievementUploader_Uploaded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01083610, void, GetAchievementProgress, ())
    IL2CPP_REGISTER_METHOD(0x010838F0, void, Obtained, (app::XblAchievement__Array * achievements))
    IL2CPP_REGISTER_METHODINFO(0x047422E0, AchievementUploader_Obtained__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010839F0, void, ResetCachedData, ())
    IL2CPP_REGISTER_METHOD(0x01083AC0, void, Reset, ())
    IL2CPP_REGISTER_METHOD(0x01083BA0, void, cctor, ())
} // namespace app::classes::Grdk::AchievementUploader
