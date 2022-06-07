#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UberStateVisualization::SpaceMongerWidget {
    IL2CPP_REGISTER_METHOD(0x030BED70, void, add_OnSelectionChanged, (app::SpaceMongerWidget * this_ptr, app::Action_1_Moon_UberStateVisualization_UberStateData_ * value))
    IL2CPP_REGISTER_METHOD(0x030BEE60, void, remove_OnSelectionChanged, (app::SpaceMongerWidget * this_ptr, app::Action_1_Moon_UberStateVisualization_UberStateData_ * value))
    IL2CPP_REGISTER_METHOD(0x030BEF50, void, ctor, (app::SpaceMongerWidget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030BF130, void, SetSelection, (app::SpaceMongerWidget * this_ptr, app::UberStateData uber_state))
    IL2CPP_REGISTER_METHOD(0x030BF220, int32_t, GetStateIndex, (app::SpaceMongerWidget * this_ptr, app::UberStateData uber_state))
    IL2CPP_REGISTER_METHOD(0x030BF340, void, TrySelectPreviousState, (app::SpaceMongerWidget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030BF490, void, TrySelectNextState, (app::SpaceMongerWidget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030BF5F0, void, UpdateWithModel, (app::SpaceMongerWidget * this_ptr, app::List_1_Moon_UberStateVisualization_UberStateGroupData_ * state_group_datas))
    IL2CPP_REGISTER_METHOD(0x030BFB00, void, Layout, (app::SpaceMongerWidget * this_ptr, app::Rect view_rect))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleInput, (app::SpaceMongerWidget * this_ptr, app::ControllerInput * input))
    IL2CPP_REGISTER_METHOD(0x030C0470, void, Render, (app::SpaceMongerWidget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030C1800, void, Clear, (app::SpaceMongerWidget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030C1810, void, TryChangeUberStateSelection, (app::SpaceMongerWidget * this_ptr, app::UberStateData uber_state))
    IL2CPP_REGISTER_METHOD(0x030C19F0, bool, IsStateHighlighted, (app::SpaceMongerWidget * this_ptr, app::UberStateData uber_state))
    IL2CPP_REGISTER_METHOD(0x030C1AC0, bool, IsStateSelected, (app::SpaceMongerWidget * this_ptr, app::UberStateData uber_state))
    IL2CPP_REGISTER_METHOD(0x030C1B90, void, CalculateGroupDataLayout, (app::SpaceMongerWidget * this_ptr, app::UberStateGroupData * group_data, app::Rect rect))
}
