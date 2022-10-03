#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_UpscalePost {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineView_UpscalePost__Class** type_info;
        inline app::MoonRenderPipelineView_UpscalePost__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_UpscalePost__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "UpscalePost");
        }
        inline app::MoonRenderPipelineView_UpscalePost* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_UpscalePost>(get_class());
        }
    } // namespace MoonRenderPipelineView_UpscalePost
} // namespace app::classes::types
