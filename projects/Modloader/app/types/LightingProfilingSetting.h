#pragma once
#include <Modloader/app/structs/LightingProfilingSetting.h>
#include <Modloader/app/structs/LightingProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightingProfilingSetting {
        inline app::LightingProfilingSetting__Class** type_info() {
            static app::LightingProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightingProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::LightingProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "LightingProfilingSetting");
        }
        inline app::LightingProfilingSetting* create() {
            return il2cpp::create_object<app::LightingProfilingSetting>(get_class());
        }
    } // namespace LightingProfilingSetting
} // namespace app::classes::types
