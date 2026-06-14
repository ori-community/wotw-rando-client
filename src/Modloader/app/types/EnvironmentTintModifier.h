#pragma once
#include <Modloader/app/structs/EnvironmentTintModifier.h>
#include <Modloader/app/structs/EnvironmentTintModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnvironmentTintModifier {
        inline app::EnvironmentTintModifier__Class** type_info() {
            static app::EnvironmentTintModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnvironmentTintModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnvironmentTintModifier__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentTintModifier__Class>(type_info(), "", "EnvironmentTintModifier");
        }
        inline app::EnvironmentTintModifier* create() {
            return il2cpp::create_object<app::EnvironmentTintModifier>(get_class());
        }
    } // namespace EnvironmentTintModifier
} // namespace app::classes::types
