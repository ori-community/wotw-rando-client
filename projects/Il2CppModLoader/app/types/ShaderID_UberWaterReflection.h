#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_UberWaterReflection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_UberWaterReflection__Class** type_info;
        inline app::ShaderID_UberWaterReflection__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_UberWaterReflection__Class>(type_info, "", "ShaderID_UberWaterReflection");
        }
        inline app::ShaderID_UberWaterReflection* create() {
            return il2cpp::create_object<app::ShaderID_UberWaterReflection>(get_class());
        }
    } // namespace ShaderID_UberWaterReflection
} // namespace app::classes::types
