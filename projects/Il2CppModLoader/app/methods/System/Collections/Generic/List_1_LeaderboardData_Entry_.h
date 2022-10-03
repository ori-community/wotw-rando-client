#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_LeaderboardData_Entry_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_LeaderboardData_Entry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473C8A0, List_1_LeaderboardData_Entry__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_LeaderboardData_Entry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04749668, List_1_LeaderboardData_Entry___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_LeaderboardData_Entry_ * this_ptr, app::IEnumerable_1_LeaderboardData_Entry_* collection))
    IL2CPP_REGISTER_METHODINFO(0x0476AEE0, List_1_LeaderboardData_Entry__AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_LeaderboardData_Entry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476AAC0, List_1_LeaderboardData_Entry__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_LeaderboardData_Entry_, GetEnumerator, (app::List_1_LeaderboardData_Entry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705A08, List_1_LeaderboardData_Entry__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LeaderboardData_Entry*, get_Item, (app::List_1_LeaderboardData_Entry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04797040, List_1_LeaderboardData_Entry__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F05A0, app::LeaderboardData_Entry*, Find, (app::List_1_LeaderboardData_Entry_ * this_ptr, app::Predicate_1_LeaderboardData_Entry_* match))
    IL2CPP_REGISTER_METHODINFO(0x0471F6E0, List_1_LeaderboardData_Entry__Find__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_LeaderboardData_Entry_ * this_ptr, app::LeaderboardData_Entry* item))
    IL2CPP_REGISTER_METHODINFO(0x04790508, List_1_LeaderboardData_Entry__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_LeaderboardData_Entry_
