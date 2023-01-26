#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_UInt64_System_Action_2_.h>
#include <Modloader/app/structs/Action_2_Steamworks_UserAchievementStored_t_Boolean_.h>
#include <Modloader/app/structs/Action_2_Steamworks_UserStatsReceived_t_Boolean_.h>
#include <Modloader/app/structs/Action_2_Steamworks_UserStatsStored_t_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt64_System_Action_2__1.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt64_System_Action_2__2.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt64_System_Action_2_ {
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add_1, (app::Dictionary_2_System_UInt64_System_Action_2_ * this_ptr, uint64_t key, app::Action_2_Steamworks_UserAchievementStored_t_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x02F09E70, bool, Remove_1, (app::Dictionary_2_System_UInt64_System_Action_2_ * this_ptr, uint64_t key))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue_1, (app::Dictionary_2_System_UInt64_System_Action_2_ * this_ptr, uint64_t key, app::Action_2_Steamworks_UserAchievementStored_t_Boolean_** value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_UInt64_System_Action_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add_2, (app::Dictionary_2_System_UInt64_System_Action_2__1 * this_ptr, uint64_t key, app::Action_2_Steamworks_UserStatsReceived_t_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x02F09E70, bool, Remove_2, (app::Dictionary_2_System_UInt64_System_Action_2__1 * this_ptr, uint64_t key))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue_2, (app::Dictionary_2_System_UInt64_System_Action_2__1 * this_ptr, uint64_t key, app::Action_2_Steamworks_UserStatsReceived_t_Boolean_** value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_2, (app::Dictionary_2_System_UInt64_System_Action_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add_3, (app::Dictionary_2_System_UInt64_System_Action_2__2 * this_ptr, uint64_t key, app::Action_2_Steamworks_UserStatsStored_t_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x02F09E70, bool, Remove_3, (app::Dictionary_2_System_UInt64_System_Action_2__2 * this_ptr, uint64_t key))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue_3, (app::Dictionary_2_System_UInt64_System_Action_2__2 * this_ptr, uint64_t key, app::Action_2_Steamworks_UserStatsStored_t_Boolean_** value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_3, (app::Dictionary_2_System_UInt64_System_Action_2__2 * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt64_System_Action_2_
