#pragma once
#include <Modloader/app/structs/SimpleSRPToggleProfilingSetting.h>
#include <Modloader/app/structs/SimpleSRPToggleProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleSRPToggleProfilingSetting {
        inline app::SimpleSRPToggleProfilingSetting__Class** type_info() {
            static app::SimpleSRPToggleProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleSRPToggleProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleSRPToggleProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::SimpleSRPToggleProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "SimpleSRPToggleProfilingSetting");
        }
        inline app::SimpleSRPToggleProfilingSetting* create() {
            return il2cpp::create_object<app::SimpleSRPToggleProfilingSetting>(get_class());
        }
    } // namespace SimpleSRPToggleProfilingSetting
} // namespace app::classes::types
