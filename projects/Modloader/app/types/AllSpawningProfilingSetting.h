#pragma once
#include <Modloader/app/structs/AllSpawningProfilingSetting.h>
#include <Modloader/app/structs/AllSpawningProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AllSpawningProfilingSetting {
        inline app::AllSpawningProfilingSetting__Class** type_info() {
            static app::AllSpawningProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AllSpawningProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AllSpawningProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::AllSpawningProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "AllSpawningProfilingSetting");
        }
        inline app::AllSpawningProfilingSetting* create() {
            return il2cpp::create_object<app::AllSpawningProfilingSetting>(get_class());
        }
    } // namespace AllSpawningProfilingSetting
} // namespace app::classes::types
