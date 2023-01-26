#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonRenderPipelineDebug_Slice.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineDebug_Slice {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::MoonRenderPipelineDebug_Slice * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00794070, void, ctor_2, (app::MoonRenderPipelineDebug_Slice * this_ptr, app::MoonRenderPipelineDebug_Slice* original))
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineDebug_Slice
