#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_UberShaderAtlasBuildValidator {
        inline app::ShaderID_UberShaderAtlasBuildValidator__Class** type_info = (app::ShaderID_UberShaderAtlasBuildValidator__Class**)(modloader::win::memory::resolve_rva(0x0477A198));
        inline app::ShaderID_UberShaderAtlasBuildValidator__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_UberShaderAtlasBuildValidator__Class>(type_info, "UberShader.optimizations.atlassing", "ShaderID_UberShaderAtlasBuildValidator");
        }
        inline app::ShaderID_UberShaderAtlasBuildValidator* create() {
            return il2cpp::create_object<app::ShaderID_UberShaderAtlasBuildValidator>(get_class());
        }
    } // namespace ShaderID_UberShaderAtlasBuildValidator
} // namespace app::classes::types
