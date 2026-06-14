#pragma once
#include <Modloader/app/structs/GodRaysProfilingSetting.h>
#include <Modloader/app/structs/GodRaysProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GodRaysProfilingSetting {
        inline app::GodRaysProfilingSetting__Class** type_info() {
            static app::GodRaysProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GodRaysProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GodRaysProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::GodRaysProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "GodRaysProfilingSetting");
        }
        inline app::GodRaysProfilingSetting* create() {
            return il2cpp::create_object<app::GodRaysProfilingSetting>(get_class());
        }
    } // namespace GodRaysProfilingSetting
} // namespace app::classes::types
