#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberStateData.h>
#include <Modloader/app/structs/UberStateGroupData.h>
#include <Modloader/app/structs/UberStateVisualizationView_c.h>

namespace app::classes::Moon::UberStateVisualization::UberStateVisualizationView___c {
    IL2CPP_REGISTER_METHOD(0x030CB390, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UberStateVisualizationView_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x030CB4D0,
        int32_t,
        _UpdateWithModel_b__10_0,
        app::UberStateVisualizationView_c* this_ptr,
        app::UberStateGroupData a,
        app::UberStateGroupData b
    )
    IL2CPP_REGISTER_METHOD(
        0x030CB520,
        int32_t,
        _OnGroupsListViewSelectionChanged_b__11_0,
        app::UberStateVisualizationView_c* this_ptr,
        app::UberStateData a,
        app::UberStateData b
    )
} // namespace app::classes::Moon::UberStateVisualization::UberStateVisualizationView___c
