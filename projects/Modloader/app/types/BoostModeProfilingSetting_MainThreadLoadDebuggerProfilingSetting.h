#pragma once
#include <Modloader/app/structs/BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting.h>
#include <Modloader/app/structs/BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting {
        inline app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting__Class** type_info() {
            static app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting__Class* get_class() {
            return il2cpp::get_nested_class<app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "BoostModeProfilingSetting", "MainThreadLoadDebuggerProfilingSetting");
        }
        inline app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting* create() {
            return il2cpp::create_object<app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting>(get_class());
        }
    } // namespace BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting
} // namespace app::classes::types
