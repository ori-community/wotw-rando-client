#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowMemoryOverlayProfilingSetting {
        namespace {
            inline app::ShowMemoryOverlayProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::ShowMemoryOverlayProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ShowMemoryOverlayProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ShowMemoryOverlayProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ShowMemoryOverlayProfilingSetting");
        }
        inline app::ShowMemoryOverlayProfilingSetting* create() {
            return il2cpp::create_object<app::ShowMemoryOverlayProfilingSetting>(get_class());
        }
    } // namespace ShowMemoryOverlayProfilingSetting
} // namespace app::classes::types
