#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::EquipmentUIInventoryGrid {
    IL2CPP_REGISTER_METHOD(0x009781A0, app::CleverMenuItemSelectionManager*, get_NavigationManager, app::EquipmentUIInventoryGrid* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_NavigationManager, app::EquipmentUIInventoryGrid* this_ptr, app::CleverMenuItemSelectionManager* value)
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsActive, app::EquipmentUIInventoryGrid* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00978280, void, set_IsActive, app::EquipmentUIInventoryGrid* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00978310, void, FixedUpdate, app::EquipmentUIInventoryGrid* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00978330,
        void,
        Configure,
        app::EquipmentUIInventoryGrid* this_ptr,
        app::GameObject* item_prefab,
        app::GameObject* item_highlight_g_o,
        app::Action_1_UnityEngine_GameObject_* on_new_item_instantiated
    )
    IL2CPP_REGISTER_METHOD(0x00978280, void, SetIsActive, app::EquipmentUIInventoryGrid* this_ptr, bool active)
    IL2CPP_REGISTER_METHOD(0x00978350, void, SetCurrentItem, app::EquipmentUIInventoryGrid* this_ptr, int32_t index, bool run_actions)
    IL2CPP_REGISTER_METHOD(0x009783B0, void, UpdateSelection, app::EquipmentUIInventoryGrid* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009784D0, void, UpdateItemHighlight, app::EquipmentUIInventoryGrid* this_ptr, app::EquipmentUIInventoryItem* item)
    IL2CPP_REGISTER_METHOD(0x009788E0, void, UpdateScrolling, app::EquipmentUIInventoryGrid* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00978CC0, bool, CheckParent, app::EquipmentUIInventoryGrid* this_ptr, app::Transform* parent, app::Transform* highlight)
    IL2CPP_REGISTER_METHOD(0x00978E90, void, ResetScrolling, app::EquipmentUIInventoryGrid* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x009791E0,
        void,
        Populate,
        app::EquipmentUIInventoryGrid* this_ptr,
        app::List_1_System_Object_* inventory_items,
        app::Object* grid_context,
        bool run_actions
    )
    IL2CPP_REGISTER_METHOD(
        0x00979D40,
        void,
        PopulateUsingCache,
        app::EquipmentUIInventoryGrid* this_ptr,
        app::List_1_System_Object_* inventory_items,
        app::Object* grid_context,
        bool run_actions
    )
    IL2CPP_REGISTER_METHOD(0x00979FF0, void, GetRowAndCol, app::EquipmentUIInventoryGrid* this_ptr, int32_t index, int32_t* col, int32_t* row)
    IL2CPP_REGISTER_METHOD(0x0097A040, void, UpdateItemProperties, app::EquipmentUIInventoryGrid* this_ptr, app::Object* grid_context)
    IL2CPP_REGISTER_METHOD(0x0097A270, void, ctor, app::EquipmentUIInventoryGrid* this_ptr)
} // namespace app::classes::EquipmentUIInventoryGrid
