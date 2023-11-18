#pragma once
#include <Modloader/app/structs/SimpleBoolToggleProfilingSetting.h>
#include <Modloader/app/structs/SimpleBoolToggleProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleBoolToggleProfilingSetting {
        inline app::SimpleBoolToggleProfilingSetting__Class** type_info() {
            static app::SimpleBoolToggleProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleBoolToggleProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleBoolToggleProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::SimpleBoolToggleProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "SimpleBoolToggleProfilingSetting");
        }
        inline app::SimpleBoolToggleProfilingSetting* create() {
            return il2cpp::create_object<app::SimpleBoolToggleProfilingSetting>(get_class());
        }
    } // namespace SimpleBoolToggleProfilingSetting
} // namespace app::classes::types
