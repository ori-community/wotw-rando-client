#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderPipeline {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderPipeline__Class** type_info;
        inline app::RenderPipeline__Class* get_class() {
            return il2cpp::get_class<app::RenderPipeline__Class>(type_info, "UnityEngine.Experimental.Rendering", "RenderPipeline");
        }
        inline app::RenderPipeline* create() {
            return il2cpp::create_object<app::RenderPipeline>(get_class());
        }
    } // namespace RenderPipeline
} // namespace app::classes::types
