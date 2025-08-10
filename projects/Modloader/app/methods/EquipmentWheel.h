#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/EquipmentWheel.h>
#include <Modloader/app/structs/HashSet_1_EquipmentType_.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/List_1_EquipmentType_.h>
#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#include <Modloader/app/structs/SpellUIItem.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::EquipmentWheel {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::MenuTabBackground__Enum, get_BackgroundMode, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097AAF0, app::List_1_EquipmentType_*, get_EquipmentTypeValues, )
    IL2CPP_REGISTER_METHOD(0x0097AC90, app::List_1_EquipmentType_*, get_ValidEquipmentTypes, )
    IL2CPP_REGISTER_METHOD(0x0097B040, app::PlayerUberStateInventory_InventoryItem*, get_SelectedSpell, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097B110, app::SpellUIItem*, get_SelectedSpellUIItem, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097B200, void, OnEnable, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097B8C0, void, OnDisable, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097BF80, void, Awake, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097C1A0, void, Start, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097C200, void, OnDestroy, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097C3A0, void, FixedUpdate, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097CD20, void, ForceOverrideRadialSelection, app::EquipmentWheel* this_ptr, app::Vector2 angle)
    IL2CPP_REGISTER_METHOD(0x0097D160, void, SetArrowDirection, app::EquipmentWheel* this_ptr, app::Vector2 direction)
    IL2CPP_REGISTER_METHOD(0x0097D420, void, SetArrowLookTarget, app::EquipmentWheel* this_ptr, app::Vector2 look_target)
    IL2CPP_REGISTER_METHOD(0x0097D5A0, void, InitializeGrids, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097D5F0, void, OnNewItemHighlighted, app::EquipmentWheel* this_ptr, bool first_after_populating)
    IL2CPP_REGISTER_METHOD(0x0097D630, void, HandleRestore, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097DB50, void, RefreshRestoreEquipment, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097DC00, void, RemoveBindings, app::List_1_EquipmentType_* equipment_list)
    IL2CPP_REGISTER_METHOD(0x0097DE60, void, RemoveAllBindings, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0097DFB0,
        void,
        OverrideEquipmentBinding,
        app::EquipmentWheel* this_ptr,
        app::SpellInventory_Binding__Enum binding,
        app::EquipmentType__Enum type
    )
    IL2CPP_REGISTER_METHOD(0x0097E0F0, void, OnBindingsUpdated, app::EquipmentWheel* this_ptr, app::SpellInventory_Binding__Enum binding)
    IL2CPP_REGISTER_METHOD(0x0097E4C0, void, OnPressButton, app::EquipmentWheel* this_ptr, app::SpellInventory_Binding__Enum binding_button)
    IL2CPP_REGISTER_METHOD(0x0097EB70, void, OnPressX, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097EB80, void, OnPressY, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097EB90, void, OnPressB, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097EBA0, app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_*, GetWheelItems, )
    IL2CPP_REGISTER_METHOD(0x0097EE20, void, GetValidTypesWithRestrictions, app::HashSet_1_EquipmentType_* destination_list)
    IL2CPP_REGISTER_METHOD(0x0097F040, int32_t, GetValidTypesWithRestrictionsCount, )
    IL2CPP_REGISTER_METHOD(0x0097F180, bool, HasElement, app::EquipmentType__Enum type)
    IL2CPP_REGISTER_METHOD(0x0097F290, bool, IsTandemGameplay, )
    IL2CPP_REGISTER_METHOD(0x0097F420, bool, IsAllowedOnWheel, app::EquipmentType__Enum type)
    IL2CPP_REGISTER_METHOD(0x0097F650, void, PopulateInventoryCanvasWithEquipment, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097F8D0, app::PlayerUberStateInventory_InventoryItem*, GetActualInventoryItem, app::EquipmentType__Enum typ)
    IL2CPP_REGISTER_METHOD(
        0x0097FAD0,
        void,
        UpdateBinding,
        app::EquipmentWheel* this_ptr,
        app::PlayerUberStateInventory_InventoryItem* item,
        app::SpellInventory_Binding__Enum binding
    )
    IL2CPP_REGISTER_METHOD(0x0097FC60, void, UpdateContextCanvasSpells, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097FD80, void, Hide, app::EquipmentWheel* this_ptr, bool change)
    IL2CPP_REGISTER_METHOD(0x0097FDC0, void, HideImmediate, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0097FDE0, void, Show, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00980110, void, ShowImmediate, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_IsSuspended, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B8970, void, set_IsSuspended, app::EquipmentWheel* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FFB70, app::SuspendableMask__Enum, get_Mask, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00980130, void, set_Mask, app::EquipmentWheel* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x009801F0, app::HashSet_1_Moon_ISuspendable_*, get_CachedSuspendables, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00980290, void, CacheSuspendables, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00980400, void, OnPostTimeSlicedEnable, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00980510, void, OnInstantiate, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00980950, void, ctor, app::EquipmentWheel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00980EC0, void, cctor, )
} // namespace app::classes::EquipmentWheel
