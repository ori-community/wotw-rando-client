#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_.h>
#include <Modloader/app/structs/List_1_SpiritShardType_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/PlayerSpiritShards.h>
#include <Modloader/app/structs/PlayerUberStateShards.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/SpiritShardType__Enum__Array.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/UpgradablePropertyType__Enum.h>

namespace app::classes::PlayerSpiritShards {
    IL2CPP_REGISTER_METHOD(0x01428CF0, app::PlayerUberStateShards*, get_PlayerUberStateShards, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01428DD0, app::List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_*, get_Shards, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_MinShardSlots, )
    IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, get_MaxShardSlots, )
    IL2CPP_REGISTER_METHOD(0x01428DF0, bool, InArrayBounds, app::PlayerSpiritShards* this_ptr, app::SpiritShardType__Enum shard_type)
    IL2CPP_REGISTER_METHOD(0x01428E20, void, OnDestroy, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01429650, void, OnInventoryUpdateCallback, app::PlayerSpiritShards* this_ptr, app::PlayerUberStateShards_Shard* shard)
    IL2CPP_REGISTER_METHOD(0x01429650, void, OnGlobalShardsUpdatedCallback, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01429650, void, OnGlobalShardsEquipCallback, app::PlayerSpiritShards* this_ptr, app::PlayerUberStateShards_Shard* shard)
    IL2CPP_REGISTER_METHOD(0x01429650, void, OnGlobalShardsUnequipCallback, app::PlayerSpiritShards* this_ptr, app::PlayerUberStateShards_Shard* shard)
    IL2CPP_REGISTER_METHOD(0x01429660, void, RefreshQuickAccessArrays, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01429A40, void, AllocateQuickAccessArrays, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01429B80, bool, HasShard, app::PlayerSpiritShards* this_ptr, app::SpiritShardType__Enum shard_type)
    IL2CPP_REGISTER_METHOD(0x01429D30, void, RefreshHasShard, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01429DE0, bool, IsGlobalShardEquipped_1, app::PlayerSpiritShards* this_ptr, app::SpiritShardType__Enum shard_type)
    IL2CPP_REGISTER_METHOD(0x01429FA0, void, RefreshIsShardEquipped, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142A060, int32_t, GetGlobalShardLevel, app::PlayerSpiritShards* this_ptr, app::SpiritShardType__Enum shard_type)
    IL2CPP_REGISTER_METHOD(0x0142A240, void, RefreshShardLevel, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142A310, int32_t, GetGlobalShardMaxLevel, app::PlayerSpiritShards* this_ptr, app::SpiritShardType__Enum shard_type)
    IL2CPP_REGISTER_METHOD(0x0142A4C0, void, RefreshShardMaxLevel, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142A570, void, EquipGlobalShard, app::PlayerSpiritShards* this_ptr, app::PlayerUberStateShards_Shard* shard, bool apply_instantly)
    IL2CPP_REGISTER_METHOD(0x0142A850, void, ApplyEquip, app::PlayerSpiritShards* this_ptr, app::PlayerUberStateShards_Shard* shard)
    IL2CPP_REGISTER_METHOD(
        0x0142A8F0,
        void,
        UnequipGlobalShard,
        app::PlayerSpiritShards* this_ptr,
        app::PlayerUberStateShards_Shard* shard,
        bool apply_instantly
    )
    IL2CPP_REGISTER_METHOD(0x0142AA40, void, ApplyUnequip, app::PlayerSpiritShards* this_ptr, app::PlayerUberStateShards_Shard* shard)
    IL2CPP_REGISTER_METHOD(0x0142AAE0, void, UnequipAllShards, app::PlayerSpiritShards* this_ptr, app::SpiritShardType__Enum__Array* exceptions)
    IL2CPP_REGISTER_METHOD(0x0142AD30, bool, IsGlobalShardEquipped_2, app::PlayerSpiritShards* this_ptr, app::PlayerUberStateShards_Shard* shard)
    IL2CPP_REGISTER_METHOD(0x0142AD50, bool, IsShardMaxedOut, app::PlayerSpiritShards* this_ptr, app::SpiritShardType__Enum spirit_shard_type)
    IL2CPP_REGISTER_METHOD(
        0x0142ADC0,
        bool,
        GetGlobalShardProperty_1,
        app::PlayerSpiritShards* this_ptr,
        app::SpiritShardType__Enum spirit_shard_type,
        app::UpgradablePropertyType__Enum property_type,
        float* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0142AF90,
        float,
        GetGlobalShardProperty_2,
        app::PlayerSpiritShards* this_ptr,
        app::SpiritShardType__Enum spirit_shard_type,
        app::UpgradablePropertyType__Enum property_type
    )
    IL2CPP_REGISTER_METHOD(0x0142AFC0, bool, GetGlobalShardFreeSlotAvailable, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142B050, void, AddGlobalShardSlot, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142B1A0, void, SetGlobalShardSlotCount, app::PlayerSpiritShards* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x0142B1F0,
        app::PlayerUberStateShards_Shard*,
        AddNewShardToInventory_1,
        app::PlayerSpiritShards* this_ptr,
        app::SpiritShardType__Enum spirit_shard_type
    )
    IL2CPP_REGISTER_METHOD(0x0142B390, void, AddNewShardToInventory_2, app::PlayerSpiritShards* this_ptr, app::PlayerUberStateShards_Shard* shard_item)
    IL2CPP_REGISTER_METHOD(0x0142B4C0, void, SetReferenceToSein, app::PlayerSpiritShards* this_ptr, app::SeinCharacter* sein)
    IL2CPP_REGISTER_METHOD(
        0x0142BE60,
        bool,
        GetGlobalShardPropertyHelper,
        app::SpiritShardType__Enum spirit_shard_type,
        app::UpgradablePropertyType__Enum property_type,
        float* value
    )
    IL2CPP_REGISTER_METHOD(0x0142BF80, void, DebugAddShards, app::PlayerSpiritShards* this_ptr, bool missing_only, app::List_1_SpiritShardType_* except)
    IL2CPP_REGISTER_METHOD(0x0142C4D0, void, ApplyShards, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142C730, void, GetCurrentEquippedShards, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142C900, void, EquipShard, app::PlayerSpiritShards* this_ptr, app::PlayerUberStateShards_Shard* shard)
    IL2CPP_REGISTER_METHOD(0x0142CA50, void, UnequipShard, app::PlayerSpiritShards* this_ptr, app::PlayerUberStateShards_Shard* shard)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HandlePlayerDeath, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142CBA0, void, HandleRestore, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142D090, void, HandleOnGameSerializedLoad, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142D0A0, void, DisableShardsForRaces, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0142D160,
        int32_t,
        SortShardsByIndex,
        app::PlayerSpiritShards* this_ptr,
        app::PlayerUberStateShards_Shard* x,
        app::PlayerUberStateShards_Shard* y
    )
    IL2CPP_REGISTER_METHOD(
        0x0142D1A0,
        app::PlayerUberStateShards_Shard*,
        GetActualInventoryItem,
        app::PlayerSpiritShards* this_ptr,
        app::SpiritShardType__Enum typ
    )
    IL2CPP_REGISTER_METHOD(0x0142D360, void, Apply, app::PlayerSpiritShards* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142D370, app::IUberState__Array*, get_AffectingUberStates, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142D4B0, void, ctor, app::PlayerSpiritShards* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0142DDE0, void, cctor, )
} // namespace app::classes::PlayerSpiritShards
