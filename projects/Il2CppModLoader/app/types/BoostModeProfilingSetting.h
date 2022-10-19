#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BoostModeProfilingSetting {
        namespace {
            inline app::BoostModeProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::BoostModeProfilingSetting__Class** type_info = &type_info_ref;
        inline app::BoostModeProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::BoostModeProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "BoostModeProfilingSetting");
        }
        inline app::BoostModeProfilingSetting* create() {
            return il2cpp::create_object<app::BoostModeProfilingSetting>(get_class());
        }
    } // namespace BoostModeProfilingSetting
} // namespace app::classes::types
