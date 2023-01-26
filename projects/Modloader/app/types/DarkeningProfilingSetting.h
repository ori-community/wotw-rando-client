#pragma once
#include <Modloader/app/structs/DarkeningProfilingSetting.h>
#include <Modloader/app/structs/DarkeningProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DarkeningProfilingSetting {
        inline app::DarkeningProfilingSetting__Class** type_info() {
            static app::DarkeningProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DarkeningProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DarkeningProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DarkeningProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "DarkeningProfilingSetting");
        }
        inline app::DarkeningProfilingSetting* create() {
            return il2cpp::create_object<app::DarkeningProfilingSetting>(get_class());
        }
    } // namespace DarkeningProfilingSetting
} // namespace app::classes::types
