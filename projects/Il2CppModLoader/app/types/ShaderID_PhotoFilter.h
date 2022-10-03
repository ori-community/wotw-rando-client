#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_PhotoFilter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_PhotoFilter__Class** type_info;
        inline app::ShaderID_PhotoFilter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_PhotoFilter__Class>(type_info, "Colorful", "ShaderID_PhotoFilter");
        }
        inline app::ShaderID_PhotoFilter* create() {
            return il2cpp::create_object<app::ShaderID_PhotoFilter>(get_class());
        }
    } // namespace ShaderID_PhotoFilter
} // namespace app::classes::types
