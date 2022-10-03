#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderPipelineAsset {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderPipelineAsset__Class** type_info;
        inline app::RenderPipelineAsset__Class* get_class() {
            return il2cpp::get_class<app::RenderPipelineAsset__Class>(type_info, "UnityEngine.Experimental.Rendering", "RenderPipelineAsset");
        }
        inline app::RenderPipelineAsset* create() {
            return il2cpp::create_object<app::RenderPipelineAsset>(get_class());
        }
    } // namespace RenderPipelineAsset
} // namespace app::classes::types
