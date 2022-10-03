#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::NotificationChecker {
    IL2CPP_REGISTER_METHOD(0x0060C330, void, ctor, (app::NotificationChecker * this_ptr, app::RaceSettings* settings, app::String* race_i_d, int32_t original_rank, app::LeaderBoardService* leader_board_service, int32_t slot_index))
    IL2CPP_REGISTER_METHOD(0x0060C3F0, void, UpdateNotificationChecker, (app::NotificationChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060C400, void, RefreshCurrentLeaderboardPlace, (app::NotificationChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060C540, void, TryReadLeaderboardData, (app::NotificationChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060C9D0, bool, CheckIfPlayerWasBeaten, (app::NotificationChecker * this_ptr, int32_t player_index))
    IL2CPP_REGISTER_METHOD(0x0060C9F0, void, SavePlayerIndex, (app::NotificationChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060CCA0, bool, ShouldShowNotification, (app::NotificationChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060CCB0, void, ShowNotification, (app::NotificationChecker * this_ptr, bool show))
} // namespace app::classes::NotificationChecker
