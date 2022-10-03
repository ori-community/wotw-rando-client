#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StencilMaterial {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StencilMaterial__Class** type_info;
        inline app::StencilMaterial__Class* get_class() {
            return il2cpp::get_class<app::StencilMaterial__Class>(type_info, "UnityEngine.UI", "StencilMaterial");
        }
        inline app::StencilMaterial* create() {
            return il2cpp::create_object<app::StencilMaterial>(get_class());
        }
    } // namespace StencilMaterial
} // namespace app::classes::types
