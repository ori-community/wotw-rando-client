#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ShadowsMidtonesHighlights {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ShadowsMidtonesHighlights__Class** type_info;
        inline app::ShaderID_ShadowsMidtonesHighlights__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ShadowsMidtonesHighlights__Class>(type_info, "Colorful", "ShaderID_ShadowsMidtonesHighlights");
        }
        inline app::ShaderID_ShadowsMidtonesHighlights* create() {
            return il2cpp::create_object<app::ShaderID_ShadowsMidtonesHighlights>(get_class());
        }
    } // namespace ShaderID_ShadowsMidtonesHighlights
} // namespace app::classes::types
