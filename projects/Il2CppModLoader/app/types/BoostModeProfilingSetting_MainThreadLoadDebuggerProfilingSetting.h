#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting {
        namespace {
            app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting__Class** type_info = &type_info_ref;
        inline app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting__Class* get_class() {
            return il2cpp::get_nested_class<app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "BoostModeProfilingSetting", "MainThreadLoadDebuggerProfilingSetting");
        }
        inline app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting* create() {
            return il2cpp::create_object<app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting>(get_class());
        }
    } // namespace BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting
} // namespace app::classes::types
