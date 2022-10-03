#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_BloomAndFlares {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_BloomAndFlares__Class** type_info;
        inline app::ShaderID_BloomAndFlares__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BloomAndFlares__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_BloomAndFlares");
        }
        inline app::ShaderID_BloomAndFlares* create() {
            return il2cpp::create_object<app::ShaderID_BloomAndFlares>(get_class());
        }
    } // namespace ShaderID_BloomAndFlares
} // namespace app::classes::types
