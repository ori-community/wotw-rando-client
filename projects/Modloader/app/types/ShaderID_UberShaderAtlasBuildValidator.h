#pragma once
#include <Modloader/app/structs/ShaderID_UberShaderAtlasBuildValidator.h>
#include <Modloader/app/structs/ShaderID_UberShaderAtlasBuildValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_UberShaderAtlasBuildValidator {
        inline app::ShaderID_UberShaderAtlasBuildValidator__Class** type_info() {
            static app::ShaderID_UberShaderAtlasBuildValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_UberShaderAtlasBuildValidator__Class**)(modloader::win::memory::resolve_rva(0x0477A198));
            }
            return cache;
        }
        inline app::ShaderID_UberShaderAtlasBuildValidator__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_UberShaderAtlasBuildValidator__Class>(type_info(), "UberShader.optimizations.atlassing", "ShaderID_UberShaderAtlasBuildValidator");
        }
        inline app::ShaderID_UberShaderAtlasBuildValidator* create() {
            return il2cpp::create_object<app::ShaderID_UberShaderAtlasBuildValidator>(get_class());
        }
    } // namespace ShaderID_UberShaderAtlasBuildValidator
} // namespace app::classes::types
