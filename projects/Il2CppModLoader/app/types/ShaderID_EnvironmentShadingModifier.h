#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_EnvironmentShadingModifier {
        inline app::ShaderID_EnvironmentShadingModifier__Class** type_info = (app::ShaderID_EnvironmentShadingModifier__Class**)(modloader::win::memory::resolve_rva(0x0476C1E8));
        inline app::ShaderID_EnvironmentShadingModifier__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_EnvironmentShadingModifier__Class>(type_info, "", "ShaderID_EnvironmentShadingModifier");
        }
        inline app::ShaderID_EnvironmentShadingModifier* create() {
            return il2cpp::create_object<app::ShaderID_EnvironmentShadingModifier>(get_class());
        }
    } // namespace ShaderID_EnvironmentShadingModifier
} // namespace app::classes::types
