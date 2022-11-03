#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ForceMaxDRSProfilingSetting {
        namespace {
            inline app::ForceMaxDRSProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::ForceMaxDRSProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ForceMaxDRSProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ForceMaxDRSProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ForceMaxDRSProfilingSetting");
        }
        inline app::ForceMaxDRSProfilingSetting* create() {
            return il2cpp::create_object<app::ForceMaxDRSProfilingSetting>(get_class());
        }
    } // namespace ForceMaxDRSProfilingSetting
} // namespace app::classes::types
