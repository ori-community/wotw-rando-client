#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting {
        namespace {
            app::BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting__Class** type_info = &type_info_ref;
        inline app::BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting__Class* get_class() {
            return il2cpp::get_nested_class<app::BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "BoostModeProfilingSetting", "CallDestroyWhenNotAwokenProfilingSetting");
        }
        inline app::BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting* create() {
            return il2cpp::create_object<app::BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting>(get_class());
        }
    } // namespace BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting
} // namespace app::classes::types
