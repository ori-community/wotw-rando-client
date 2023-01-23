#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting__Class.h>
#include <Modloader/app/structs/BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting.h>

namespace app::classes::types {
    namespace BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting {
        namespace {
            inline app::BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting__Class** type_info = &type_info_ref;
        inline app::BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting__Class* get_class() {
            return il2cpp::get_nested_class<app::BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "BoostModeProfilingSetting", "CallMoonCleanupWhenAwokenProfilingSetting");
        }
        inline app::BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting* create() {
            return il2cpp::create_object<app::BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting>(get_class());
        }
    } // namespace BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting
} // namespace app::classes::types
