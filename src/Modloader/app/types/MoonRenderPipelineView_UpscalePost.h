#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView_UpscalePost.h>
#include <Modloader/app/structs/MoonRenderPipelineView_UpscalePost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_UpscalePost {
        inline app::MoonRenderPipelineView_UpscalePost__Class** type_info() {
            static app::MoonRenderPipelineView_UpscalePost__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineView_UpscalePost__Class**)(modloader::win::memory::resolve_rva(0x04731400));
            }
            return cache;
        }
        inline app::MoonRenderPipelineView_UpscalePost__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_UpscalePost__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView", "UpscalePost");
        }
        inline app::MoonRenderPipelineView_UpscalePost* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_UpscalePost>(get_class());
        }
    } // namespace MoonRenderPipelineView_UpscalePost
} // namespace app::classes::types
