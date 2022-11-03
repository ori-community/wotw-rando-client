#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_UpscalePost {
        inline app::MoonRenderPipelineView_UpscalePost__Class** type_info = (app::MoonRenderPipelineView_UpscalePost__Class**)(modloader::win::memory::resolve_rva(0x04731400));
        inline app::MoonRenderPipelineView_UpscalePost__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_UpscalePost__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "UpscalePost");
        }
        inline app::MoonRenderPipelineView_UpscalePost* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_UpscalePost>(get_class());
        }
    } // namespace MoonRenderPipelineView_UpscalePost
} // namespace app::classes::types
