#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_Race_LeaderBoardEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Race_LeaderBoardEntry_.h>
#include <Modloader/app/structs/LeaderBoardEntry.h>
#include <Modloader/app/structs/List_1_Moon_Race_LeaderBoardEntry_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_Race_LeaderBoardEntry_.h>
#include <Modloader/app/structs/Predicate_1_Moon_Race_LeaderBoardEntry_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Race_LeaderBoardEntry_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, app::List_1_Moon_Race_LeaderBoardEntry_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LeaderBoardEntry*, get_Item, app::List_1_Moon_Race_LeaderBoardEntry_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_Moon_Race_LeaderBoardEntry_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_Race_LeaderBoardEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Moon_Race_LeaderBoardEntry_* this_ptr, app::LeaderBoardEntry* item)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, app::List_1_Moon_Race_LeaderBoardEntry_* this_ptr, app::Comparison_1_Moon_Race_LeaderBoardEntry_* comparison)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, app::List_1_Moon_Race_LeaderBoardEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_Moon_Race_LeaderBoardEntry_*,
        GetRange,
        app::List_1_Moon_Race_LeaderBoardEntry_* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9A20,
        int32_t,
        FindIndex,
        app::List_1_Moon_Race_LeaderBoardEntry_* this_ptr,
        app::Predicate_1_Moon_Race_LeaderBoardEntry_* match
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_Race_LeaderBoardEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_Moon_Race_LeaderBoardEntry_* this_ptr,
        app::IEnumerable_1_Moon_Race_LeaderBoardEntry_* collection
    )
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_Race_LeaderBoardEntry_, GetEnumerator, app::List_1_Moon_Race_LeaderBoardEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Race_LeaderBoardEntry_
