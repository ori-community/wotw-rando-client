#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::XGamingRuntime::SDK_XBL {
    IL2CPP_REGISTER_METHOD(0x030B9230, int32_t, XblAchievementsResultGetAchievements, (app::XblAchievementsResultHandle * result_handle, app::XblAchievement__Array** achievements))
    IL2CPP_REGISTER_METHOD(0x030B9520, void, XblAchievementsGetAchievementsForTitleIdAsync, (app::XblContextHandle * xbox_live_context, uint64_t xbox_user_id, uint32_t title_id, app::XblAchievementType__Enum type, bool unlocked_only, app::XblAchievementOrderBy__Enum order_by, uint32_t skip_items, uint32_t max_items, app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult* completion_routine))
    IL2CPP_REGISTER_METHOD(0x030B98F0, void, XblAchievementsUpdateAchievementAsync, (app::XblContextHandle * xbox_live_context, uint64_t xbox_user_id, uint32_t title_id, app::String* service_configuration_id, app::String* achievement_id, uint32_t percent_complete, app::SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult* completion_routine))
    IL2CPP_REGISTER_METHOD(0x030B9CD0, int32_t, XblInitialize, (app::String * scid))
    IL2CPP_REGISTER_METHOD(0x030B9E30, void, XblCleanup, (app::SDK_XBL_XblCleanupResult * completion_routine))
    IL2CPP_REGISTER_METHOD(0x030BA160, int32_t, XblContextCreateHandle, (app::XUserHandle * user, app::XblContextHandle** context))
    IL2CPP_REGISTER_METHOD(0x030BA390, void, XblContextCloseHandle, (app::XblContextHandle * xbox_live_context_handle))
} // namespace app::classes::XGamingRuntime::SDK_XBL
