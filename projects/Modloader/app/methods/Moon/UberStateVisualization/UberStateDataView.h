#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberStateDataView.h>
#include <Modloader/app/structs/UberStateData.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/ControllerInput.h>

namespace app::classes::Moon::UberStateVisualization::UberStateDataView {
    IL2CPP_REGISTER_METHOD(0x030C2840, void, UpdateWithModel, (app::UberStateDataView * this_ptr, app::UberStateData state_data))
    IL2CPP_REGISTER_METHOD(0x030C2920, void, OnGui, (app::UberStateDataView * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x030C3120, void, Layout, (app::UberStateDataView * this_ptr, app::Rect view_rect))
    IL2CPP_REGISTER_METHOD(0x030C31A0, void, Render, (app::UberStateDataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030C3960, void, HandleInput, (app::UberStateDataView * this_ptr, app::ControllerInput* input))
    IL2CPP_REGISTER_METHOD(0x030C3AC0, void, Clear, (app::UberStateDataView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberStateDataView * this_ptr))
} // namespace app::classes::Moon::UberStateVisualization::UberStateDataView
