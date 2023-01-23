#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberStateVisualizationView.h>
#include <Modloader/app/structs/UberStateData.h>
#include <Modloader/app/structs/UberStateValueStore.h>
#include <Modloader/app/structs/ListViewItem.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/ControllerInput.h>
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateGroupData.h>
#include <Modloader/app/structs/UberStateValueGroup.h>

namespace app::classes::Moon::UberStateVisualization::UberStateVisualizationView {
    IL2CPP_REGISTER_METHOD(0x030C4940, void, ctor, (app::UberStateVisualizationView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030C5050, void, OnSpaceMongerSelectionChanged, (app::UberStateVisualizationView * this_ptr, app::UberStateData uber_state))
    IL2CPP_REGISTER_METHODINFO(0x0473D3E8, UberStateVisualizationView_OnSpaceMongerSelectionChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030C51D0, void, UpdateWithModel, (app::UberStateVisualizationView * this_ptr, app::UberStateValueStore* uber_state_value_store))
    IL2CPP_REGISTER_METHOD(0x030C62A0, void, OnGroupsListViewSelectionChanged, (app::UberStateVisualizationView * this_ptr, app::ListViewItem* selected_item))
    IL2CPP_REGISTER_METHODINFO(0x04718300, UberStateVisualizationView_OnGroupsListViewSelectionChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030C6C00, void, OnStatesListViewSelectionChanged, (app::UberStateVisualizationView * this_ptr, app::ListViewItem* selected_item))
    IL2CPP_REGISTER_METHODINFO(0x04759E18, UberStateVisualizationView_OnStatesListViewSelectionChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030C6E60, void, OnGui, (app::UberStateVisualizationView * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x030C6EA0, void, Layout, (app::UberStateVisualizationView * this_ptr, app::Rect view_rect))
    IL2CPP_REGISTER_METHOD(0x030C7260, void, Render, (app::UberStateVisualizationView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030C73E0, void, RenderToolbar, (app::UberStateVisualizationView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030C74D0, void, DrawSplitter, (app::UberStateVisualizationView * this_ptr, app::Rect splitter_rect))
    IL2CPP_REGISTER_METHOD(0x030C7600, app::ControllerInput*, UpdateInput, (app::UberStateVisualizationView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030C7CF0, void, HandleInput, (app::UberStateVisualizationView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030C8030, void, Clear, (app::UberStateVisualizationView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030C8090, app::UberStateData, CreateStateData, (app::UberStateVisualizationView * this_ptr, app::UberID* id, app::UberID* group_id, int64_t size, app::Color color, app::String* string_value))
    IL2CPP_REGISTER_METHOD(0x030C8210, int32_t, GetStateKey, (app::UberStateVisualizationView * this_ptr, int32_t state_id, int32_t group_id))
    IL2CPP_REGISTER_METHOD(0x030C82F0, app::UberStateGroupData, badCreateGroupData, (app::UberStateVisualizationView * this_ptr, app::UberID* id, app::UberStateValueGroup* state_value_group, app::Color color))
    IL2CPP_REGISTER_METHOD(0x030CA120, int64_t, badGetGroupSize, (app::UberStateVisualizationView * this_ptr, app::UberStateValueGroup* value_group))
    IL2CPP_REGISTER_METHOD(0x030CAA60, int32_t, badGetStatesAmount, (app::UberStateVisualizationView * this_ptr, app::UberStateValueGroup* value_group))
} // namespace app::classes::Moon::UberStateVisualization::UberStateVisualizationView
