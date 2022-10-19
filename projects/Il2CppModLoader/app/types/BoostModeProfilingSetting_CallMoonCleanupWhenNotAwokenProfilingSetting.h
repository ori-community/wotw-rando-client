#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting {
        namespace {
            inline app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting__Class** type_info = &type_info_ref;
        inline app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting__Class* get_class() {
            return il2cpp::get_nested_class<app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "BoostModeProfilingSetting", "CallMoonCleanupWhenNotAwokenProfilingSetting");
        }
        inline app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting* create() {
            return il2cpp::create_object<app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting>(get_class());
        }
    } // namespace BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting
} // namespace app::classes::types
