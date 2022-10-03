#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowMemoryOverlayProfilingSetting {
        namespace {
            app::ShowMemoryOverlayProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::ShowMemoryOverlayProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ShowMemoryOverlayProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ShowMemoryOverlayProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ShowMemoryOverlayProfilingSetting");
        }
        inline app::ShowMemoryOverlayProfilingSetting* create() {
            return il2cpp::create_object<app::ShowMemoryOverlayProfilingSetting>(get_class());
        }
    } // namespace ShowMemoryOverlayProfilingSetting
} // namespace app::classes::types
