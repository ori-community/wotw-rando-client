#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimesliceEOFProfilingSetting {
        namespace {
            inline app::TimesliceEOFProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::TimesliceEOFProfilingSetting__Class** type_info = &type_info_ref;
        inline app::TimesliceEOFProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TimesliceEOFProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "TimesliceEOFProfilingSetting");
        }
        inline app::TimesliceEOFProfilingSetting* create() {
            return il2cpp::create_object<app::TimesliceEOFProfilingSetting>(get_class());
        }
    } // namespace TimesliceEOFProfilingSetting
} // namespace app::classes::types
