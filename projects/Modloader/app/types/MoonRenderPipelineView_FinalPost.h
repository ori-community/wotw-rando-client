#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView_FinalPost.h>
#include <Modloader/app/structs/MoonRenderPipelineView_FinalPost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_FinalPost {
        inline app::MoonRenderPipelineView_FinalPost__Class** type_info() {
            static app::MoonRenderPipelineView_FinalPost__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineView_FinalPost__Class**)(modloader::win::memory::resolve_rva(0x047900E0));
            }
            return cache;
        }
        inline app::MoonRenderPipelineView_FinalPost__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_FinalPost__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView", "FinalPost");
        }
        inline app::MoonRenderPipelineView_FinalPost* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_FinalPost>(get_class());
        }
    } // namespace MoonRenderPipelineView_FinalPost
} // namespace app::classes::types
