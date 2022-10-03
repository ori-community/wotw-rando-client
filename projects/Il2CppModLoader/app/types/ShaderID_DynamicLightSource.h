#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DynamicLightSource {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_DynamicLightSource__Class** type_info;
        inline app::ShaderID_DynamicLightSource__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DynamicLightSource__Class>(type_info, "", "ShaderID_DynamicLightSource");
        }
        inline app::ShaderID_DynamicLightSource* create() {
            return il2cpp::create_object<app::ShaderID_DynamicLightSource>(get_class());
        }
    } // namespace ShaderID_DynamicLightSource
} // namespace app::classes::types
