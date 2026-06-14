#pragma once
#include <Modloader/app/structs/MoonTrailsProfilingSetting.h>
#include <Modloader/app/structs/MoonTrailsProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrailsProfilingSetting {
        inline app::MoonTrailsProfilingSetting__Class** type_info() {
            static app::MoonTrailsProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTrailsProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTrailsProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailsProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "MoonTrailsProfilingSetting");
        }
        inline app::MoonTrailsProfilingSetting* create() {
            return il2cpp::create_object<app::MoonTrailsProfilingSetting>(get_class());
        }
    } // namespace MoonTrailsProfilingSetting
} // namespace app::classes::types
