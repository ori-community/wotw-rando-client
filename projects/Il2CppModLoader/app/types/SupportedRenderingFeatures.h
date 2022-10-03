#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SupportedRenderingFeatures {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SupportedRenderingFeatures__Class** type_info;
        inline app::SupportedRenderingFeatures__Class* get_class() {
            return il2cpp::get_class<app::SupportedRenderingFeatures__Class>(type_info, "UnityEngine.Experimental.Rendering", "SupportedRenderingFeatures");
        }
        inline app::SupportedRenderingFeatures* create() {
            return il2cpp::create_object<app::SupportedRenderingFeatures>(get_class());
        }
    } // namespace SupportedRenderingFeatures
} // namespace app::classes::types
