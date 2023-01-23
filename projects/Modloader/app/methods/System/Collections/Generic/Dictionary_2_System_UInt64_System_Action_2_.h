#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt64_System_Action_2_.h>
#include <Modloader/app/structs/Action_2_Steamworks_UserAchievementStored_t_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt64_System_Action_2__1.h>
#include <Modloader/app/structs/Action_2_Steamworks_UserStatsReceived_t_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt64_System_Action_2__2.h>
#include <Modloader/app/structs/Action_2_Steamworks_UserStatsStored_t_Boolean_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt64_System_Action_2_ {
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add_1, (app::Dictionary_2_System_UInt64_System_Action_2_ * this_ptr, uint64_t key, app::Action_2_Steamworks_UserAchievementStored_t_Boolean_* value))
    IL2CPP_REGISTER_METHODINFO(0x04767AE0, Dictionary_2_System_UInt64_System_Action_2__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F09E70, bool, Remove_1, (app::Dictionary_2_System_UInt64_System_Action_2_ * this_ptr, uint64_t key))
    IL2CPP_REGISTER_METHODINFO(0x0475C8B8, Dictionary_2_System_UInt64_System_Action_2__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue_1, (app::Dictionary_2_System_UInt64_System_Action_2_ * this_ptr, uint64_t key, app::Action_2_Steamworks_UserAchievementStored_t_Boolean_** value))
    IL2CPP_REGISTER_METHODINFO(0x0472D1B0, Dictionary_2_System_UInt64_System_Action_2__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_UInt64_System_Action_2_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04758F70, Dictionary_2_System_UInt64_System_Action_2___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add_2, (app::Dictionary_2_System_UInt64_System_Action_2__1 * this_ptr, uint64_t key, app::Action_2_Steamworks_UserStatsReceived_t_Boolean_* value))
    IL2CPP_REGISTER_METHODINFO(0x04776D60, Dictionary_2_System_UInt64_System_Action_2__1_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F09E70, bool, Remove_2, (app::Dictionary_2_System_UInt64_System_Action_2__1 * this_ptr, uint64_t key))
    IL2CPP_REGISTER_METHODINFO(0x04708D40, Dictionary_2_System_UInt64_System_Action_2__1_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue_2, (app::Dictionary_2_System_UInt64_System_Action_2__1 * this_ptr, uint64_t key, app::Action_2_Steamworks_UserStatsReceived_t_Boolean_** value))
    IL2CPP_REGISTER_METHODINFO(0x04716138, Dictionary_2_System_UInt64_System_Action_2__1_TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_2, (app::Dictionary_2_System_UInt64_System_Action_2__1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478BEB0, Dictionary_2_System_UInt64_System_Action_2__1__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add_3, (app::Dictionary_2_System_UInt64_System_Action_2__2 * this_ptr, uint64_t key, app::Action_2_Steamworks_UserStatsStored_t_Boolean_* value))
    IL2CPP_REGISTER_METHODINFO(0x047054C0, Dictionary_2_System_UInt64_System_Action_2__2_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F09E70, bool, Remove_3, (app::Dictionary_2_System_UInt64_System_Action_2__2 * this_ptr, uint64_t key))
    IL2CPP_REGISTER_METHODINFO(0x0474B748, Dictionary_2_System_UInt64_System_Action_2__2_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue_3, (app::Dictionary_2_System_UInt64_System_Action_2__2 * this_ptr, uint64_t key, app::Action_2_Steamworks_UserStatsStored_t_Boolean_** value))
    IL2CPP_REGISTER_METHODINFO(0x04756500, Dictionary_2_System_UInt64_System_Action_2__2_TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_3, (app::Dictionary_2_System_UInt64_System_Action_2__2 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780B80, Dictionary_2_System_UInt64_System_Action_2__2__ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt64_System_Action_2_
