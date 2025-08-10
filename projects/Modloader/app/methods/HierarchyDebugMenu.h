#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HierarchyDebugMenu.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/IDebugMenuItem.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/List_1_List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::HierarchyDebugMenu {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::List_1_List_1_IDebugMenuItem_*, get_Items, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Items, app::HierarchyDebugMenu* this_ptr, app::List_1_List_1_IDebugMenuItem_* value)
    IL2CPP_REGISTER_METHOD(0x007DE870, bool, get_Active, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4B7A0, void, set_Active, app::HierarchyDebugMenu* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddMenuItem, app::HierarchyDebugMenu* this_ptr, app::String* path, app::IDebugMenuItem* item, int32_t col)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Clear, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GoBackMenu, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4B7D0, void, Reset, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::String*, get_Path, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_Path, app::HierarchyDebugMenu* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::String*, get_Text, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_Text, app::HierarchyDebugMenu* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::String*, get_HelpText, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_HelpText, app::HierarchyDebugMenu* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4B890, void, Awake, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4BB00, void, Enable, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4BC60, void, Disable, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4BEC0, void, RebuildExpandedState, app::HierarchyDebugMenu* this_ptr, app::HierarchyDebugMenu_GameObjectItem* item)
    IL2CPP_REGISTER_METHOD(0x00B4C130, void, BuildCachedState, app::HierarchyDebugMenu* this_ptr, app::HierarchyDebugMenu_GameObjectItem* item)
    IL2CPP_REGISTER_METHOD(0x00B4C2B0, void, OnGUI, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4C350, bool, Draw, app::HierarchyDebugMenu* this_ptr, app::Rect rect, bool is_selected)
    IL2CPP_REGISTER_METHOD(0x00B4C5C0, app::GameObject*, get_UberPoolsGroup, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4C720, app::GameObject*, get_SceneRootsGroup, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4C880, void, BuildHierarchy, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4D910, void, MoveSelectionDown, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4D9E0, void, MoveSelectionUp, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4DAA0, void, ResetHold, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4DAC0, void, OnSelectedUpdate, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4DC80, bool, IsGroupMoonHidden, app::HierarchyDebugMenu* this_ptr, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x00B4DF70, void, EnterSteppingMode, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4DF80, void, ExitSteppingMode, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4DFB0, void, OnSelectedFixedUpdate, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4FCD0, app::IEnumerator*, WaitForStepEnd, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4FE20, app::HierarchyDebugMenu_GameObjectItem*, FindAndPingGameObject, app::HierarchyDebugMenu* this_ptr, int32_t instance_i_d)
    IL2CPP_REGISTER_METHOD(
        0x00B4FF60,
        app::HierarchyDebugMenu_GameObjectItem*,
        CheckGameObjectItem,
        app::HierarchyDebugMenu* this_ptr,
        app::HierarchyDebugMenu_GameObjectItem* item,
        int32_t instance_i_d
    )
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::Func_1_String_*, get_DynamicText, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_DynamicText, app::HierarchyDebugMenu* this_ptr, app::Func_1_String_* value)
    IL2CPP_REGISTER_METHOD(
        0x00B500E0,
        void,
        OnItemGUI,
        app::HierarchyDebugMenu* this_ptr,
        app::HierarchyDebugMenu_GameObjectItem* item,
        int32_t* index,
        int32_t depth
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateSelectedItem, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B509B0, void, DrawSelectedItemDetails, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawInstantiationHistory, app::HierarchyDebugMenu* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B51B40, int32_t, CompareChildrenByCPU, app::HierarchyDebugMenu_GameObjectItem* a, app::HierarchyDebugMenu_GameObjectItem* b)
    IL2CPP_REGISTER_METHOD(0x00B51BA0, int32_t, CompareChildrenByGPU, app::HierarchyDebugMenu_GameObjectItem* a, app::HierarchyDebugMenu_GameObjectItem* b)
    IL2CPP_REGISTER_METHOD(0x00B51C00, int32_t, CompareChildrenByName, app::HierarchyDebugMenu_GameObjectItem* a, app::HierarchyDebugMenu_GameObjectItem* b)
    IL2CPP_REGISTER_METHOD(0x00B51D90, void, ctor, app::HierarchyDebugMenu* this_ptr)
} // namespace app::classes::HierarchyDebugMenu
