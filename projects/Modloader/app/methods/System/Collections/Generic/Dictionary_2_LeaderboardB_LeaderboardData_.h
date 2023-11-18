#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_LeaderboardB_LeaderboardData_.h>
#include <Modloader/app/structs/LeaderboardB__Enum.h>
#include <Modloader/app/structs/LeaderboardData.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_LeaderboardB_LeaderboardData_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_LeaderboardB_LeaderboardData_ * this_ptr, app::LeaderboardB__Enum key))
    IL2CPP_REGISTER_METHOD(0x02C35530, app::LeaderboardData*, get_Item, (app::Dictionary_2_LeaderboardB_LeaderboardData_ * this_ptr, app::LeaderboardB__Enum key))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_LeaderboardB_LeaderboardData_ * this_ptr, app::LeaderboardB__Enum key, app::LeaderboardData* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_LeaderboardB_LeaderboardData_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_LeaderboardB_LeaderboardData_
