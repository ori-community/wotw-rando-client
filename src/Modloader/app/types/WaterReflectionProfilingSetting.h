#pragma once
#include <Modloader/app/structs/WaterReflectionProfilingSetting.h>
#include <Modloader/app/structs/WaterReflectionProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterReflectionProfilingSetting {
        inline app::WaterReflectionProfilingSetting__Class** type_info() {
            static app::WaterReflectionProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterReflectionProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterReflectionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::WaterReflectionProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "WaterReflectionProfilingSetting");
        }
        inline app::WaterReflectionProfilingSetting* create() {
            return il2cpp::create_object<app::WaterReflectionProfilingSetting>(get_class());
        }
    } // namespace WaterReflectionProfilingSetting
} // namespace app::classes::types
