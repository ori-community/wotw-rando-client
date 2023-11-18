#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ * this_ptr, app::SpiritShardType__Enum key, app::PlayerUberStateShards_Shard* value))
    IL2CPP_REGISTER_METHOD(0x02EAA0E0, app::PlayerUberStateShards_Shard*, get_Item, (app::Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ * this_ptr, app::SpiritShardType__Enum key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_
