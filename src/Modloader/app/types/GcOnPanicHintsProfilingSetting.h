#pragma once
#include <Modloader/app/structs/GcOnPanicHintsProfilingSetting.h>
#include <Modloader/app/structs/GcOnPanicHintsProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GcOnPanicHintsProfilingSetting {
        inline app::GcOnPanicHintsProfilingSetting__Class** type_info() {
            static app::GcOnPanicHintsProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GcOnPanicHintsProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GcOnPanicHintsProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::GcOnPanicHintsProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "GcOnPanicHintsProfilingSetting");
        }
        inline app::GcOnPanicHintsProfilingSetting* create() {
            return il2cpp::create_object<app::GcOnPanicHintsProfilingSetting>(get_class());
        }
    } // namespace GcOnPanicHintsProfilingSetting
} // namespace app::classes::types
