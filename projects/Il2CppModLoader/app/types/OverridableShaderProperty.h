#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OverridableShaderProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OverridableShaderProperty__Class** type_info;
        inline app::OverridableShaderProperty__Class* get_class() {
            return il2cpp::get_class<app::OverridableShaderProperty__Class>(type_info, "", "OverridableShaderProperty");
        }
        inline app::OverridableShaderProperty* create() {
            return il2cpp::create_object<app::OverridableShaderProperty>(get_class());
        }
    } // namespace OverridableShaderProperty
} // namespace app::classes::types
