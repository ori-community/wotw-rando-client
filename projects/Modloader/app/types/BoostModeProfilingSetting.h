#pragma once
#include <Modloader/app/structs/BoostModeProfilingSetting.h>
#include <Modloader/app/structs/BoostModeProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoostModeProfilingSetting {
        inline app::BoostModeProfilingSetting__Class** type_info() {
            static app::BoostModeProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BoostModeProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BoostModeProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::BoostModeProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "BoostModeProfilingSetting");
        }
        inline app::BoostModeProfilingSetting* create() {
            return il2cpp::create_object<app::BoostModeProfilingSetting>(get_class());
        }
    } // namespace BoostModeProfilingSetting
} // namespace app::classes::types
