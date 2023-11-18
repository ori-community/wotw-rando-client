#pragma once
#include <Modloader/app/structs/ShaderID_EnvironmentLightingModifier.h>
#include <Modloader/app/structs/ShaderID_EnvironmentLightingModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_EnvironmentLightingModifier {
        inline app::ShaderID_EnvironmentLightingModifier__Class** type_info() {
            static app::ShaderID_EnvironmentLightingModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_EnvironmentLightingModifier__Class**)(modloader::win::memory::resolve_rva(0x04785368));
            }
            return cache;
        }
        inline app::ShaderID_EnvironmentLightingModifier__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_EnvironmentLightingModifier__Class>(type_info(), "", "ShaderID_EnvironmentLightingModifier");
        }
        inline app::ShaderID_EnvironmentLightingModifier* create() {
            return il2cpp::create_object<app::ShaderID_EnvironmentLightingModifier>(get_class());
        }
    } // namespace ShaderID_EnvironmentLightingModifier
} // namespace app::classes::types
