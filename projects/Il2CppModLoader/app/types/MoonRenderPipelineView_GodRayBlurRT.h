#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_GodRayBlurRT {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineView_GodRayBlurRT__Class** type_info;
        inline app::MoonRenderPipelineView_GodRayBlurRT__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_GodRayBlurRT__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "GodRayBlurRT");
        }
        inline app::MoonRenderPipelineView_GodRayBlurRT* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_GodRayBlurRT>(get_class());
        }
        inline app::MoonRenderPipelineView_GodRayBlurRT__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineView_GodRayBlurRT__Array>(get_class(), size);
        }
    } // namespace MoonRenderPipelineView_GodRayBlurRT
} // namespace app::classes::types
