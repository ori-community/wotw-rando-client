#pragma once
#include <Modloader/app/structs/PanicHintsProfilingSetting.h>
#include <Modloader/app/structs/PanicHintsProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PanicHintsProfilingSetting {
        inline app::PanicHintsProfilingSetting__Class** type_info() {
            static app::PanicHintsProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PanicHintsProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PanicHintsProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::PanicHintsProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "PanicHintsProfilingSetting");
        }
        inline app::PanicHintsProfilingSetting* create() {
            return il2cpp::create_object<app::PanicHintsProfilingSetting>(get_class());
        }
    } // namespace PanicHintsProfilingSetting
} // namespace app::classes::types
