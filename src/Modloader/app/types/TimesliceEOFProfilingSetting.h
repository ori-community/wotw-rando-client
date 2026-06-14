#pragma once
#include <Modloader/app/structs/TimesliceEOFProfilingSetting.h>
#include <Modloader/app/structs/TimesliceEOFProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceEOFProfilingSetting {
        inline app::TimesliceEOFProfilingSetting__Class** type_info() {
            static app::TimesliceEOFProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimesliceEOFProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimesliceEOFProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TimesliceEOFProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "TimesliceEOFProfilingSetting");
        }
        inline app::TimesliceEOFProfilingSetting* create() {
            return il2cpp::create_object<app::TimesliceEOFProfilingSetting>(get_class());
        }
    } // namespace TimesliceEOFProfilingSetting
} // namespace app::classes::types
