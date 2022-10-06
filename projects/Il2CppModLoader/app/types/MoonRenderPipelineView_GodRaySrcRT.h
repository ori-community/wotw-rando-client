#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_GodRaySrcRT {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineView_GodRaySrcRT__Class** type_info;
        inline app::MoonRenderPipelineView_GodRaySrcRT__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_GodRaySrcRT__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "GodRaySrcRT");
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
