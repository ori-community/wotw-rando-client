#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListView.h>
#include <Modloader/app/structs/ListViewItem_1_UberStateData_.h>
#include <Modloader/app/structs/UberStateData.h>

namespace app::classes::Moon::UberStateVisualization::ListViewItem_1_UberStateData_ {
    IL2CPP_REGISTER_METHOD(
        0x02AF4520,
        void,
        ctor,
        app::ListViewItem_1_UberStateData_* this_ptr,
        int32_t control_id,
        app::UberStateData data,
        app::ListView* parent_view
    )
    IL2CPP_REGISTER_METHOD(0x02AF45A0, app::UberStateData, get_Data, app::ListViewItem_1_UberStateData_* this_ptr)
} // namespace app::classes::Moon::UberStateVisualization::ListViewItem_1_UberStateData_
