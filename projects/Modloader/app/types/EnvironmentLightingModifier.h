#pragma once
#include <Modloader/app/structs/EnvironmentLightingModifier.h>
#include <Modloader/app/structs/EnvironmentLightingModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnvironmentLightingModifier {
        inline app::EnvironmentLightingModifier__Class** type_info() {
            static app::EnvironmentLightingModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnvironmentLightingModifier__Class**)(modloader::win::memory::resolve_rva(0x0471B678));
            }
            return cache;
        }
        inline app::EnvironmentLightingModifier__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLightingModifier__Class>(type_info(), "", "EnvironmentLightingModifier");
        }
        inline app::EnvironmentLightingModifier* create() {
            return il2cpp::create_object<app::EnvironmentLightingModifier>(get_class());
        }
    } // namespace EnvironmentLightingModifier
} // namespace app::classes::types
