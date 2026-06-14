#pragma once
#include <Modloader/app/structs/ExpandFPSGraphProfilingSetting.h>
#include <Modloader/app/structs/ExpandFPSGraphProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpandFPSGraphProfilingSetting {
        inline app::ExpandFPSGraphProfilingSetting__Class** type_info() {
            static app::ExpandFPSGraphProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExpandFPSGraphProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExpandFPSGraphProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ExpandFPSGraphProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ExpandFPSGraphProfilingSetting");
        }
        inline app::ExpandFPSGraphProfilingSetting* create() {
            return il2cpp::create_object<app::ExpandFPSGraphProfilingSetting>(get_class());
        }
    } // namespace ExpandFPSGraphProfilingSetting
} // namespace app::classes::types
