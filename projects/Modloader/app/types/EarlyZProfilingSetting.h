#pragma once
#include <Modloader/app/structs/EarlyZProfilingSetting.h>
#include <Modloader/app/structs/EarlyZProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyZProfilingSetting {
        inline app::EarlyZProfilingSetting__Class** type_info() {
            static app::EarlyZProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyZProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyZProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EarlyZProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "EarlyZProfilingSetting");
        }
        inline app::EarlyZProfilingSetting* create() {
            return il2cpp::create_object<app::EarlyZProfilingSetting>(get_class());
        }
    } // namespace EarlyZProfilingSetting
} // namespace app::classes::types
