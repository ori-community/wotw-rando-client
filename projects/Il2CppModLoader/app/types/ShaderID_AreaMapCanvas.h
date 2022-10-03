#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_AreaMapCanvas {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_AreaMapCanvas__Class** type_info;
        inline app::ShaderID_AreaMapCanvas__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AreaMapCanvas__Class>(type_info, "", "ShaderID_AreaMapCanvas");
        }
        inline app::ShaderID_AreaMapCanvas* create() {
            return il2cpp::create_object<app::ShaderID_AreaMapCanvas>(get_class());
        }
    } // namespace ShaderID_AreaMapCanvas
} // namespace app::classes::types
