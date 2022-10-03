#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Beautify {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Beautify__Class** type_info;
        inline app::ShaderID_Beautify__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Beautify__Class>(type_info, "BeautifyEffect", "ShaderID_Beautify");
        }
        inline app::ShaderID_Beautify* create() {
            return il2cpp::create_object<app::ShaderID_Beautify>(get_class());
        }
    } // namespace ShaderID_Beautify
} // namespace app::classes::types
