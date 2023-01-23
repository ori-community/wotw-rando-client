#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MoonRenderPipelineView_FinalPost.h>
#include <Modloader/app/structs/PostProcessRenderContext.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineView_FinalPost {
    IL2CPP_REGISTER_METHOD(0x00EAD3B0, app::Material*, get_Material, ())
    IL2CPP_REGISTER_METHOD(0x00EAD710, void, IRenderPostprocessor_OnRenderImage, (app::MoonRenderPipelineView_FinalPost * this_ptr, app::PostProcessRenderContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IRenderPostprocessor_get_enabled, (app::MoonRenderPipelineView_FinalPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonRenderPipelineView_FinalPost * this_ptr))
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineView_FinalPost
