#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderPipelineManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderPipelineManager__Class** type_info;
        inline app::RenderPipelineManager__Class* get_class() {
            return il2cpp::get_class<app::RenderPipelineManager__Class>(type_info, "UnityEngine.Experimental.Rendering", "RenderPipelineManager");
        }
        inline app::RenderPipelineManager* create() {
            return il2cpp::create_object<app::RenderPipelineManager>(get_class());
        }
    } // namespace RenderPipelineManager
} // namespace app::classes::types
