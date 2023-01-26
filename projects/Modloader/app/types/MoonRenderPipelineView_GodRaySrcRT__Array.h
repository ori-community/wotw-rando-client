#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView_GodRaySrcRT__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineView_GodRaySrcRT__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_GodRaySrcRT__Array {
        inline app::MoonRenderPipelineView_GodRaySrcRT__Array__Class** type_info() {
            static app::MoonRenderPipelineView_GodRaySrcRT__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineView_GodRaySrcRT__Array__Class**)(modloader::win::memory::resolve_rva(0x04723E48));
            }
            return cache;
        }
        inline app::MoonRenderPipelineView_GodRaySrcRT__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineView_GodRaySrcRT__Array__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView+GodRaySrcRT[]");
        }
        inline app::MoonRenderPipelineView_GodRaySrcRT__Array* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_GodRaySrcRT__Array>(get_class());
        }
    } // namespace MoonRenderPipelineView_GodRaySrcRT__Array
} // namespace app::classes::types
