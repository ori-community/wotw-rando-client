#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_.h>
#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/Predicate_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::PlayerUberStateShards_Shard*,
        get_Item,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* this_ptr,
        app::PlayerUberStateShards_Shard* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_,
        GetEnumerator,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02F1E5B0,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_*,
        FindAll,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* this_ptr,
        app::Predicate_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* match
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FE8D00,
        bool,
        Contains,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* this_ptr,
        app::PlayerUberStateShards_Shard* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025F12F0,
        bool,
        Remove,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* this_ptr,
        app::PlayerUberStateShards_Shard* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* this_ptr,
        app::Comparison_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* comparison
    )
} // namespace app::classes::System::Collections::Generic::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_
