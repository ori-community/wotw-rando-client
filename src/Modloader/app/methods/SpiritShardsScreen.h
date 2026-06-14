#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#include <Modloader/app/structs/SpellUIConfirmationOverlay_Selection__Enum.h>
#include <Modloader/app/structs/SpellUIItem.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/SpiritShardUIItem.h>
#include <Modloader/app/structs/SpiritShardUIShardSocket.h>
#include <Modloader/app/structs/SpiritShardsScreen.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::SpiritShardsScreen {
    IL2CPP_REGISTER_METHOD(0x003FFBD0, app::MenuTabBackground__Enum, get_BackgroundMode, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D70F60, void, HideExistingHint, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D71050, void, ShowHint, app::SpiritShardsScreen* this_ptr, app::MessageProvider* message_provider)
    IL2CPP_REGISTER_METHOD(0x00D71270, void, Awake, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D714B0, void, Init, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D71A70, void, OnDestroy, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D72080, void, OnGlobalShardsUpdated, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D72170, void, OnBindingsUpdated, app::SpiritShardsScreen* this_ptr, app::SpellInventory_Binding__Enum binding)
    IL2CPP_REGISTER_METHOD(0x00D72260, void, OnNewItemHighlighted, app::SpiritShardsScreen* this_ptr, bool first_after_populating)
    IL2CPP_REGISTER_METHOD(0x00D72280, void, OnGCTriggerEnter, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D72320, void, OnItemActivatedCallback, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D725B0, void, EquipShard, app::SpiritShardsScreen* this_ptr, app::PlayerUberStateShards_Shard* shard)
    IL2CPP_REGISTER_METHOD(0x00D728E0, void, UnequipShard, app::SpiritShardsScreen* this_ptr, app::PlayerUberStateShards_Shard* shard)
    IL2CPP_REGISTER_METHOD(
        0x00D72C10,
        void,
        OnConfirmationSelected,
        app::SpiritShardsScreen* this_ptr,
        app::SpellUIConfirmationOverlay_Selection__Enum selection
    )
    IL2CPP_REGISTER_METHOD(0x00D72D60, void, SetAutoFocusShard, app::SpiritShardsScreen* this_ptr, app::SpiritShardType__Enum spirit_shard_type)
    IL2CPP_REGISTER_METHOD(0x00D72E70, void, OnShardInventoryUpdatedCallback, app::SpiritShardsScreen* this_ptr, app::PlayerUberStateShards_Shard* item)
    IL2CPP_REGISTER_METHOD(0x00D72E80, void, ChangeState, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D72E90, app::SpellUIItem*, get_SelectedSpellUIItem, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D72F90, app::PlayerUberStateInventory_InventoryItem*, get_SelectedSpell, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D73130, app::SpiritShardUIItem*, get_SelectedSpiritShardUIItem, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D73230, app::SpiritShardUIShardSocket*, get_SelectedSpiritShardSocket, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D73330, app::PlayerUberStateShards_Shard*, get_SelectedSpiritShard, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5B6B0, bool, get_IsSuspended, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5B6C0, void, set_IsSuspended, app::SpiritShardsScreen* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00C75A10, app::SuspendableMask__Enum, get_Mask, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D73620, void, set_Mask, app::SpiritShardsScreen* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00D736E0, void, Hide, app::SpiritShardsScreen* this_ptr, bool change)
    IL2CPP_REGISTER_METHOD(0x00D73720, void, HideImmediate, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D73760, void, Show, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D73960, void, ShowImmediate, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D739D0, void, FocusOnShard, app::SpiritShardsScreen* this_ptr, app::PlayerUberStateShards_Shard* item)
    IL2CPP_REGISTER_METHOD(0x00D73D60, void, FocusOnPreviousSelection, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D74190, void, FixedUpdate, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D74320, void, OnCategoryChanged, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D74580, void, AddSocketsToNavigation, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D74D00, void, UpdateContextCanvasShards, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D75320, void, PopulateInventoryCanvasWithShards, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00D757D0,
        app::PlayerUberStateShards_Shard*,
        GetActualInventoryItem,
        app::SpiritShardsScreen* this_ptr,
        app::SpiritShardType__Enum typ
    )
    IL2CPP_REGISTER_METHOD(0x00D759C0, void, OnPostTimeSlicedEnable, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D75AE0, void, OnInstantiate, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D76380, float, get_VisualProgress, app::SpiritShardsScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D763B0, void, ctor, app::SpiritShardsScreen* this_ptr)
} // namespace app::classes::SpiritShardsScreen
