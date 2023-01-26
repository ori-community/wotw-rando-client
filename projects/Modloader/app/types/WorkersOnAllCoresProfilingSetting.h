#pragma once
#include <Modloader/app/structs/WorkersOnAllCoresProfilingSetting.h>
#include <Modloader/app/structs/WorkersOnAllCoresProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorkersOnAllCoresProfilingSetting {
        inline app::WorkersOnAllCoresProfilingSetting__Class** type_info() {
            static app::WorkersOnAllCoresProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorkersOnAllCoresProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorkersOnAllCoresProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::WorkersOnAllCoresProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "WorkersOnAllCoresProfilingSetting");
        }
        inline app::WorkersOnAllCoresProfilingSetting* create() {
            return il2cpp::create_object<app::WorkersOnAllCoresProfilingSetting>(get_class());
        }
    } // namespace WorkersOnAllCoresProfilingSetting
} // namespace app::classes::types
