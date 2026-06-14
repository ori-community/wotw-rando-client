#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_LeaderboardData_Entry_.h>
#include <Modloader/app/structs/LeaderboardData_Entry.h>
#include <Modloader/app/structs/List_1_LeaderboardData_Entry_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_LeaderboardData_Entry_.h>
#include <Modloader/app/structs/Predicate_1_LeaderboardData_Entry_.h>

namespace app::classes::System::Collections::Generic::List_1_LeaderboardData_Entry_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_LeaderboardData_Entry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_LeaderboardData_Entry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, app::List_1_LeaderboardData_Entry_* this_ptr, app::IEnumerable_1_LeaderboardData_Entry_* collection)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_LeaderboardData_Entry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_LeaderboardData_Entry_, GetEnumerator, app::List_1_LeaderboardData_Entry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LeaderboardData_Entry*, get_Item, app::List_1_LeaderboardData_Entry_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x025F05A0,
        app::LeaderboardData_Entry*,
        Find,
        app::List_1_LeaderboardData_Entry_* this_ptr,
        app::Predicate_1_LeaderboardData_Entry_* match
    )
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_LeaderboardData_Entry_* this_ptr, app::LeaderboardData_Entry* item)
} // namespace app::classes::System::Collections::Generic::List_1_LeaderboardData_Entry_
