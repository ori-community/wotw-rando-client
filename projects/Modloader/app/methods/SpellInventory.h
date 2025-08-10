#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/Input_Command__Enum.h>
#include <Modloader/app/structs/List_1_EquipmentType_.h>
#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/PlayerUberStateInventory.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SpellInventory.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::SpellInventory {
    IL2CPP_REGISTER_METHOD(0x00EF8A00, app::PlayerUberStateInventory*, get_PlayerUberStateInventory, app::SpellInventory* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00EF8AE0,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_*,
        get_Inventory,
        app::SpellInventory* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00EF8B00,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_*,
        get_Bindings,
        app::SpellInventory* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00EF8B20, void, Awake, app::SpellInventory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EF8BC0, void, OnDestroy, app::SpellInventory* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00EF8C60,
        app::PlayerUberStateInventory_InventoryItem*,
        AddNewSpellToInventory,
        app::SpellInventory* this_ptr,
        app::EquipmentType__Enum type,
        bool adding
    )
    IL2CPP_REGISTER_METHOD(0x00EF8DA0, void, OnBind, app::SpellInventory_Binding__Enum binding, app::PlayerUberStateInventory_InventoryItem* item)
    IL2CPP_REGISTER_METHOD(
        0x00EF8F80,
        void,
        UpdateBinding_1,
        app::SpellInventory* this_ptr,
        app::SpellInventory_Binding__Enum binding,
        app::PlayerUberStateInventory_InventoryItem* item
    )
    IL2CPP_REGISTER_METHOD(
        0x00EF91A0,
        void,
        UpdateBinding_2,
        app::SpellInventory* this_ptr,
        app::SpellInventory_Binding__Enum binding,
        app::EquipmentType__Enum typ
    )
    IL2CPP_REGISTER_METHOD(0x00EF91E0, void, UnbindAllEquipment, app::SpellInventory* this_ptr, app::List_1_EquipmentType_* exceptions)
    IL2CPP_REGISTER_METHOD(0x00EF93A0, void, BindEquipmentInFreeSlot, app::SpellInventory* this_ptr, app::List_1_EquipmentType_* items)
    IL2CPP_REGISTER_METHOD(0x00EF95B0, void, UnbindItem, app::SpellInventory* this_ptr, app::EquipmentType__Enum item)
    IL2CPP_REGISTER_METHOD(0x00EF9720, bool, HasSpell, app::SpellInventory* this_ptr, app::AbilityType__Enum ability)
    IL2CPP_REGISTER_METHOD(0x00EF98F0, bool, IsItemBound, app::SpellInventory* this_ptr, app::EquipmentType__Enum typ)
    IL2CPP_REGISTER_METHOD(0x00EF9AB0, app::SpellInventory_Binding__Enum, GetItemBinding_1, app::SpellInventory* this_ptr, app::EquipmentType__Enum typ)
    IL2CPP_REGISTER_METHOD(
        0x00EF9AF0,
        app::SpellInventory_Binding__Enum,
        GetItemBinding_2,
        app::SpellInventory* this_ptr,
        app::PlayerUberStateInventory_InventoryItem* item
    )
    IL2CPP_REGISTER_METHOD(
        0x00EF9C20,
        app::PlayerUberStateInventory_InventoryItem*,
        GetActualInventoryItem,
        app::SpellInventory* this_ptr,
        app::EquipmentType__Enum typ
    )
    IL2CPP_REGISTER_METHOD(
        0x00EF9DE0,
        app::EquipmentType__Enum,
        GetBoundEquipmentType,
        app::SpellInventory* this_ptr,
        app::SpellInventory_Binding__Enum binding
    )
    IL2CPP_REGISTER_METHOD(
        0x00EF9EC0,
        int32_t,
        GetLevelOfShardSocketedToCurrentlyBoundEquipment,
        app::SpellInventory* this_ptr,
        app::SpiritShardType__Enum shard_type
    )
    IL2CPP_REGISTER_METHOD(
        0x00EF9F80,
        int32_t,
        GetLevelOfShardSocketedToCurrentlyBoundEquipmentByAbility,
        app::SpellInventory* this_ptr,
        app::AbilityType__Enum ability_type,
        app::SpiritShardType__Enum shard_type
    )
    IL2CPP_REGISTER_METHOD(
        0x00EF9FC0,
        bool,
        IsShardSocketedToCurrentlyBoundEquipmentByAbility,
        app::SpellInventory* this_ptr,
        app::AbilityType__Enum ability_type,
        app::SpiritShardType__Enum shard_type
    )
    IL2CPP_REGISTER_METHOD(0x00EFA080, void, SetReferenceToSein, app::SpellInventory* this_ptr, app::SeinCharacter* sein)
    IL2CPP_REGISTER_METHOD(0x00EFA160, app::Input_Command__Enum, BindingToButton, app::SpellInventory_Binding__Enum binding)
    IL2CPP_REGISTER_METHOD(0x00EFA230, void, ClearInventory, app::SpellInventory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFA3E0, void, DebugAddSpells, app::SpellInventory* this_ptr, bool missing_only, app::List_1_EquipmentType_* except)
    IL2CPP_REGISTER_METHOD(0x00EFA7A0, void, Apply, app::SpellInventory* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_ApplyOnEditor, app::SpellInventory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IUberState__Array*, get_AffectingUberStates, app::SpellInventory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::SpellInventory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFA900, void, ctor, app::SpellInventory* this_ptr)
} // namespace app::classes::SpellInventory
