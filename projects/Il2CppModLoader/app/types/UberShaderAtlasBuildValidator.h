#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAtlasBuildValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderAtlasBuildValidator__Class** type_info;
        inline app::UberShaderAtlasBuildValidator__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasBuildValidator__Class>(type_info, "UberShader.optimizations.atlassing", "UberShaderAtlasBuildValidator");
        }
        inline app::UberShaderAtlasBuildValidator* create() {
            return il2cpp::create_object<app::UberShaderAtlasBuildValidator>(get_class());
        }
    } // namespace UberShaderAtlasBuildValidator
} // namespace app::classes::types
