#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView_c.h>
#include <Modloader/app/structs/MoonRenderPipelineView_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_c {
        inline app::MoonRenderPipelineView_c__Class** type_info() {
            static app::MoonRenderPipelineView_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineView_c__Class**)(modloader::win::memory::resolve_rva(0x047910B8));
            }
            return cache;
        }
        inline app::MoonRenderPipelineView_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_c__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView", "<>c");
        }
        inline app::MoonRenderPipelineView_c* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_c>(get_class());
        }
    } // namespace MoonRenderPipelineView_c
} // namespace app::classes::types
