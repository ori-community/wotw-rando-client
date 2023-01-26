#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberWaterReflectionView_ViewCamInfo__Boxed.h>
#include <Modloader/app/structs/MoonRenderPipelineView.h>

namespace app::classes::UberWaterReflectionView_ViewCamInfo {
    IL2CPP_REGISTER_METHOD(0x00125DD0, void, ctor, (app::UberWaterReflectionView_ViewCamInfo__Boxed * this_ptr, app::MoonRenderPipelineView* view))
}
