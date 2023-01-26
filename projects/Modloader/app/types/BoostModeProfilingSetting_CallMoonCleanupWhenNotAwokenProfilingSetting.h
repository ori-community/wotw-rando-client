#pragma once
#include <Modloader/app/structs/BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting.h>
#include <Modloader/app/structs/BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting {
        inline app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting__Class** type_info() {
            static app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting__Class* get_class() {
            return il2cpp::get_nested_class<app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "BoostModeProfilingSetting", "CallMoonCleanupWhenNotAwokenProfilingSetting");
        }
        inline app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting* create() {
            return il2cpp::create_object<app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting>(get_class());
        }
    } // namespace BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting
} // namespace app::classes::types
