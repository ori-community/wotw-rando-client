#pragma once
#include <Modloader/app/structs/ForceMaxDRSProfilingSetting.h>
#include <Modloader/app/structs/ForceMaxDRSProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForceMaxDRSProfilingSetting {
        inline app::ForceMaxDRSProfilingSetting__Class** type_info() {
            static app::ForceMaxDRSProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ForceMaxDRSProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ForceMaxDRSProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ForceMaxDRSProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ForceMaxDRSProfilingSetting");
        }
        inline app::ForceMaxDRSProfilingSetting* create() {
            return il2cpp::create_object<app::ForceMaxDRSProfilingSetting>(get_class());
        }
    } // namespace ForceMaxDRSProfilingSetting
} // namespace app::classes::types
