#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CageTextureMaker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CageTextureMaker__Class** type_info;
        inline app::ShaderID_CageTextureMaker__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CageTextureMaker__Class>(type_info, "Moon", "ShaderID_CageTextureMaker");
        }
        inline app::ShaderID_CageTextureMaker* create() {
            return il2cpp::create_object<app::ShaderID_CageTextureMaker>(get_class());
        }
    } // namespace ShaderID_CageTextureMaker
} // namespace app::classes::types
