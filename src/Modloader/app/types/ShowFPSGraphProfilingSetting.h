#pragma once
#include <Modloader/app/structs/ShowFPSGraphProfilingSetting.h>
#include <Modloader/app/structs/ShowFPSGraphProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowFPSGraphProfilingSetting {
        inline app::ShowFPSGraphProfilingSetting__Class** type_info() {
            static app::ShowFPSGraphProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowFPSGraphProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowFPSGraphProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ShowFPSGraphProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ShowFPSGraphProfilingSetting");
        }
        inline app::ShowFPSGraphProfilingSetting* create() {
            return il2cpp::create_object<app::ShowFPSGraphProfilingSetting>(get_class());
        }
    } // namespace ShowFPSGraphProfilingSetting
} // namespace app::classes::types
