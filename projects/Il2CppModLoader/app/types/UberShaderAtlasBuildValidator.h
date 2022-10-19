#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAtlasBuildValidator {
        inline app::UberShaderAtlasBuildValidator__Class** type_info = (app::UberShaderAtlasBuildValidator__Class**)(modloader::win::memory::resolve_rva(0x04753688));
        inline app::UberShaderAtlasBuildValidator__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasBuildValidator__Class>(type_info, "UberShader.optimizations.atlassing", "UberShaderAtlasBuildValidator");
        }
        inline app::UberShaderAtlasBuildValidator* create() {
            return il2cpp::create_object<app::UberShaderAtlasBuildValidator>(get_class());
        }
    } // namespace UberShaderAtlasBuildValidator
} // namespace app::classes::types
