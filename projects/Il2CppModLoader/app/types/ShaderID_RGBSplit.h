#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_RGBSplit {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_RGBSplit__Class** type_info;
        inline app::ShaderID_RGBSplit__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_RGBSplit__Class>(type_info, "Colorful", "ShaderID_RGBSplit");
        }
        inline app::ShaderID_RGBSplit* create() {
            return il2cpp::create_object<app::ShaderID_RGBSplit>(get_class());
        }
    } // namespace ShaderID_RGBSplit
} // namespace app::classes::types
