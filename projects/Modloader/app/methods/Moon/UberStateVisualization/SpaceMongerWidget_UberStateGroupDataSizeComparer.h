#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpaceMongerWidget_UberStateGroupDataSizeComparer.h>
#include <Modloader/app/structs/UberStateGroupData.h>

namespace app::classes::Moon::UberStateVisualization::SpaceMongerWidget_UberStateGroupDataSizeComparer {
    IL2CPP_REGISTER_METHOD(
        0x030C25A0,
        int32_t,
        Compare,
        app::SpaceMongerWidget_UberStateGroupDataSizeComparer* this_ptr,
        app::UberStateGroupData x,
        app::UberStateGroupData y
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SpaceMongerWidget_UberStateGroupDataSizeComparer* this_ptr)
} // namespace app::classes::Moon::UberStateVisualization::SpaceMongerWidget_UberStateGroupDataSizeComparer
