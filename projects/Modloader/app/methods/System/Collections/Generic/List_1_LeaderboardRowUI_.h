#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_LeaderboardRowUI_.h>
#include <Modloader/app/structs/LeaderboardRowUI.h>
#include <Modloader/app/structs/List_1_T_Enumerator_LeaderboardRowUI_.h>

namespace app::classes::System::Collections::Generic::List_1_LeaderboardRowUI_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_LeaderboardRowUI_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473E8B0, List_1_LeaderboardRowUI__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LeaderboardRowUI*, get_Item, (app::List_1_LeaderboardRowUI_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476BCC8, List_1_LeaderboardRowUI__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_LeaderboardRowUI_ * this_ptr, app::LeaderboardRowUI* item))
    IL2CPP_REGISTER_METHODINFO(0x04711E80, List_1_LeaderboardRowUI__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_LeaderboardRowUI_, GetEnumerator, (app::List_1_LeaderboardRowUI_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725E70, List_1_LeaderboardRowUI__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_LeaderboardRowUI_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769F40, List_1_LeaderboardRowUI__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_LeaderboardRowUI_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047295B8, List_1_LeaderboardRowUI___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_LeaderboardRowUI_
