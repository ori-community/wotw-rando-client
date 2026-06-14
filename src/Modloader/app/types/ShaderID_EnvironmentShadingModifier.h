#pragma once
#include <Modloader/app/structs/ShaderID_EnvironmentShadingModifier.h>
#include <Modloader/app/structs/ShaderID_EnvironmentShadingModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_EnvironmentShadingModifier {
        inline app::ShaderID_EnvironmentShadingModifier__Class** type_info() {
            static app::ShaderID_EnvironmentShadingModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_EnvironmentShadingModifier__Class**)(modloader::win::memory::resolve_rva(0x0476C1E8));
            }
            return cache;
        }
        inline app::ShaderID_EnvironmentShadingModifier__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_EnvironmentShadingModifier__Class>(type_info(), "", "ShaderID_EnvironmentShadingModifier");
        }
        inline app::ShaderID_EnvironmentShadingModifier* create() {
            return il2cpp::create_object<app::ShaderID_EnvironmentShadingModifier>(get_class());
        }
    } // namespace ShaderID_EnvironmentShadingModifier
} // namespace app::classes::types
