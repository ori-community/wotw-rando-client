#pragma once
#include <Modloader/app/structs/EmissivityProfilingSetting.h>
#include <Modloader/app/structs/EmissivityProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmissivityProfilingSetting {
        inline app::EmissivityProfilingSetting__Class** type_info() {
            static app::EmissivityProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EmissivityProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EmissivityProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EmissivityProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "EmissivityProfilingSetting");
        }
        inline app::EmissivityProfilingSetting* create() {
            return il2cpp::create_object<app::EmissivityProfilingSetting>(get_class());
        }
    } // namespace EmissivityProfilingSetting
} // namespace app::classes::types
