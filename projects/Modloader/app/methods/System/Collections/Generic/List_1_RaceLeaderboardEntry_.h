#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_RaceLeaderboardEntry_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_RaceLeaderboardEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705430, List_1_RaceLeaderboardEntry__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::RaceLeaderboardEntry*, get_Item, (app::List_1_RaceLeaderboardEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04793170, List_1_RaceLeaderboardEntry__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_RaceLeaderboardEntry_ * this_ptr, app::RaceLeaderboardEntry* item))
    IL2CPP_REGISTER_METHODINFO(0x04781428, List_1_RaceLeaderboardEntry__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_RaceLeaderboardEntry_, GetEnumerator, (app::List_1_RaceLeaderboardEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738160, List_1_RaceLeaderboardEntry__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_RaceLeaderboardEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776AA0, List_1_RaceLeaderboardEntry__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_RaceLeaderboardEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047636C0, List_1_RaceLeaderboardEntry___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_RaceLeaderboardEntry_
