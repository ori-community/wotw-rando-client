#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Moon_UberStateVisualization_ListViewItem_.h>
#include <Modloader/app/structs/ControllerInput.h>
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/ListView.h>
#include <Modloader/app/structs/ListViewItem.h>
#include <Modloader/app/structs/List_1_Moon_UberStateVisualization_ListViewItem_.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::Moon::UberStateVisualization::ListView {
    IL2CPP_REGISTER_METHOD(0x019976D0, void, add_OnSelectionChanged, app::ListView* this_ptr, app::Action_1_Moon_UberStateVisualization_ListViewItem_* value)
    IL2CPP_REGISTER_METHOD(0x019977C0, void, remove_OnSelectionChanged, app::ListView* this_ptr, app::Action_1_Moon_UberStateVisualization_ListViewItem_* value)
    IL2CPP_REGISTER_METHOD(0x019978B0, void, ctor, app::ListView* this_ptr, int32_t control_id)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetHeader, app::ListView* this_ptr, app::GUIContent* header)
    IL2CPP_REGISTER_METHOD(0x01997CB0, void, SelectItem_1, app::ListView* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01997D80, void, SelectItem_2, app::ListView* this_ptr, app::ListViewItem* item)
    IL2CPP_REGISTER_METHOD(0x01997F90, void, MakeSureSelectionFramed, app::ListView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01998150, void, UpdateRect, app::ListView* this_ptr, app::Rect new_rect)
    IL2CPP_REGISTER_METHOD(0x019982E0, void, AddItem, app::ListView* this_ptr, app::ListViewItem* item)
    IL2CPP_REGISTER_METHOD(0x01998380, void, RemoveItem, app::ListView* this_ptr, app::ListViewItem* item)
    IL2CPP_REGISTER_METHOD(0x01998450, void, OnGui, app::ListView* this_ptr, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x01998F50, void, HandleInput, app::ListView* this_ptr, app::ControllerInput* input)
    IL2CPP_REGISTER_METHOD(0x019991F0, void, TryMoveSelectionDown, app::ListView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019992C0, void, TryMoveSelectionUp, app::ListView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01999380, void, Recalculate, app::ListView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::ListViewItem*, get_SelectedItem, app::ListView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::ListViewItem*, get_HoveredItem, app::ListView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_HoveredItem, app::ListView* this_ptr, app::ListViewItem* value)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::List_1_Moon_UberStateVisualization_ListViewItem_*, get_Items, app::ListView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01999450, app::Rect, get_ContentRect, app::ListView* this_ptr)
} // namespace app::classes::Moon::UberStateVisualization::ListView
