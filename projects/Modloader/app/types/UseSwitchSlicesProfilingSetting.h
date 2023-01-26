#pragma once
#include <Modloader/app/structs/UseSwitchSlicesProfilingSetting.h>
#include <Modloader/app/structs/UseSwitchSlicesProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UseSwitchSlicesProfilingSetting {
        inline app::UseSwitchSlicesProfilingSetting__Class** type_info() {
            static app::UseSwitchSlicesProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UseSwitchSlicesProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UseSwitchSlicesProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::UseSwitchSlicesProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "UseSwitchSlicesProfilingSetting");
        }
        inline app::UseSwitchSlicesProfilingSetting* create() {
            return il2cpp::create_object<app::UseSwitchSlicesProfilingSetting>(get_class());
        }
    } // namespace UseSwitchSlicesProfilingSetting
} // namespace app::classes::types
