#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExpandFPSGraphProfilingSetting {
        namespace {
            inline app::ExpandFPSGraphProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::ExpandFPSGraphProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ExpandFPSGraphProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ExpandFPSGraphProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ExpandFPSGraphProfilingSetting");
        }
        inline app::ExpandFPSGraphProfilingSetting* create() {
            return il2cpp::create_object<app::ExpandFPSGraphProfilingSetting>(get_class());
        }
    } // namespace ExpandFPSGraphProfilingSetting
} // namespace app::classes::types
