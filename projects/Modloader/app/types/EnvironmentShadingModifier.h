#pragma once
#include <Modloader/app/structs/EnvironmentShadingModifier.h>
#include <Modloader/app/structs/EnvironmentShadingModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnvironmentShadingModifier {
        inline app::EnvironmentShadingModifier__Class** type_info() {
            static app::EnvironmentShadingModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnvironmentShadingModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnvironmentShadingModifier__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentShadingModifier__Class>(type_info(), "", "EnvironmentShadingModifier");
        }
        inline app::EnvironmentShadingModifier* create() {
            return il2cpp::create_object<app::EnvironmentShadingModifier>(get_class());
        }
    } // namespace EnvironmentShadingModifier
} // namespace app::classes::types
