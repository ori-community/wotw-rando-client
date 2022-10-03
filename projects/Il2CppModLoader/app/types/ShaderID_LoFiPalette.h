#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_LoFiPalette {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_LoFiPalette__Class** type_info;
        inline app::ShaderID_LoFiPalette__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_LoFiPalette__Class>(type_info, "Colorful", "ShaderID_LoFiPalette");
        }
        inline app::ShaderID_LoFiPalette* create() {
            return il2cpp::create_object<app::ShaderID_LoFiPalette>(get_class());
        }
    } // namespace ShaderID_LoFiPalette
} // namespace app::classes::types
