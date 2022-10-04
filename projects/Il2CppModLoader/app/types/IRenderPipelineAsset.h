#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRenderPipelineAsset {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRenderPipelineAsset__Class** type_info;
        inline app::IRenderPipelineAsset__Class* get_class() {
            return il2cpp::get_class<app::IRenderPipelineAsset__Class>(type_info, "UnityEngine.Experimental.Rendering", "IRenderPipelineAsset");
        }
    } // namespace IRenderPipelineAsset
} // namespace app::classes::types
