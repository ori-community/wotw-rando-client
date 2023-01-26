#pragma once
#include <Modloader/app/structs/ShowMemoryOverlayProfilingSetting.h>
#include <Modloader/app/structs/ShowMemoryOverlayProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowMemoryOverlayProfilingSetting {
        inline app::ShowMemoryOverlayProfilingSetting__Class** type_info() {
            static app::ShowMemoryOverlayProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowMemoryOverlayProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowMemoryOverlayProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ShowMemoryOverlayProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ShowMemoryOverlayProfilingSetting");
        }
        inline app::ShowMemoryOverlayProfilingSetting* create() {
            return il2cpp::create_object<app::ShowMemoryOverlayProfilingSetting>(get_class());
        }
    } // namespace ShowMemoryOverlayProfilingSetting
} // namespace app::classes::types
