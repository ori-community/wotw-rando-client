#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EquipmentScreen.h>
#include <Modloader/app/structs/EquipmentScreen_State__Enum.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#include <Modloader/app/structs/SpellUIItem.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::EquipmentScreen {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MenuTabBackground__Enum, get_BackgroundMode, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009731B0, void, HideExistingHint, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009732A0, void, ShowHint, app::EquipmentScreen* this_ptr, app::MessageProvider* message_provider)
    IL2CPP_REGISTER_METHOD(0x009734C0, void, Awake, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009735A0, void, Init, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00973CB0, void, OnDestroy, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00974020, void, InitializeGrids, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00974380, void, OnBindingsUpdated, app::EquipmentScreen* this_ptr, app::SpellInventory_Binding__Enum binding)
    IL2CPP_REGISTER_METHOD(0x00974470, void, OnNewItemHighlighted, app::EquipmentScreen* this_ptr, bool first_after_populating)
    IL2CPP_REGISTER_METHOD(0x00974480, void, OnItemActivatedCallback, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00974620, void, AssignmentPressedCallback, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008760C0, void, OnSpellInventoryUpdatedCallback, app::EquipmentScreen* this_ptr, app::PlayerUberStateInventory_InventoryItem* item)
    IL2CPP_REGISTER_METHOD(0x00974720, void, ChangeState, app::EquipmentScreen* this_ptr, app::EquipmentScreen_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x009748F0, app::SpellUIItem*, get_SelectedSpellUIItem, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009749F0, app::PlayerUberStateInventory_InventoryItem*, get_SelectedSpell, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00974AC0, bool, get_IsSuspended, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00974AD0, void, set_IsSuspended, app::EquipmentScreen* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00974AE0, app::SuspendableMask__Enum, get_Mask, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00974AF0, void, set_Mask, app::EquipmentScreen* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00974BB0, void, Hide, app::EquipmentScreen* this_ptr, bool change)
    IL2CPP_REGISTER_METHOD(0x00974D50, void, HideImmediate, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00974D90, void, Show, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00975090, void, ShowImmediate, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00975110, void, FocusOnPreviousSelection, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00975450, void, FocusOnEquipment, app::EquipmentScreen* this_ptr, app::PlayerUberStateInventory_InventoryItem* item)
    IL2CPP_REGISTER_METHOD(0x009756F0, void, FixedUpdate, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009759B0, void, UpdateAssigning, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00975AB0,
        void,
        UpdateBinding,
        app::EquipmentScreen* this_ptr,
        app::PlayerUberStateInventory_InventoryItem* item,
        app::SpellInventory_Binding__Enum binding
    )
    IL2CPP_REGISTER_METHOD(0x00975BB0, void, UpdateContextCanvasSpells, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00975CD0, void, PopulateInventoryCanvasWithEquipment, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009761B0, void, OnPostTimeSlicedEnable, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009762D0, void, OnInstantiate, app::EquipmentScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00976770, void, ctor, app::EquipmentScreen* this_ptr)
} // namespace app::classes::EquipmentScreen
