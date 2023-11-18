#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView_GodRaySrcRT.h>
#include <Modloader/app/structs/MoonRenderPipelineView_GodRaySrcRT__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineView_GodRaySrcRT__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_GodRaySrcRT {
        inline app::MoonRenderPipelineView_GodRaySrcRT__Class** type_info() {
            static app::MoonRenderPipelineView_GodRaySrcRT__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineView_GodRaySrcRT__Class**)(modloader::win::memory::resolve_rva(0x0473C038));
            }
            return cache;
        }
        inline app::MoonRenderPipelineView_GodRaySrcRT__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_GodRaySrcRT__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView", "GodRaySrcRT");
        }
        inline app::MoonRenderPipelineView_GodRaySrcRT* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_GodRaySrcRT>(get_class());
        }
        inline app::MoonRenderPipelineView_GodRaySrcRT__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineView_GodRaySrcRT__Array>(get_class(), size);
        }
        inline app::MoonRenderPipelineView_GodRaySrcRT__Array* create_array(const std::vector<app::MoonRenderPipelineView_GodRaySrcRT*>& items) {
            return il2cpp::array_new<app::MoonRenderPipelineView_GodRaySrcRT__Array>(get_class(), items);
        }
    } // namespace MoonRenderPipelineView_GodRaySrcRT
} // namespace app::classes::types
