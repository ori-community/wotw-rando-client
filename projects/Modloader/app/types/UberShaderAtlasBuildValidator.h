#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderAtlasBuildValidator__Class.h>
#include <Modloader/app/structs/UberShaderAtlasBuildValidator.h>

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
