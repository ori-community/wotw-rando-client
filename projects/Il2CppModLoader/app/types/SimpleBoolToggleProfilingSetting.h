#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleBoolToggleProfilingSetting {
        namespace {
            app::SimpleBoolToggleProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::SimpleBoolToggleProfilingSetting__Class** type_info = &type_info_ref;
        inline app::SimpleBoolToggleProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::SimpleBoolToggleProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "SimpleBoolToggleProfilingSetting");
        }
        inline app::SimpleBoolToggleProfilingSetting* create() {
            return il2cpp::create_object<app::SimpleBoolToggleProfilingSetting>(get_class());
        }
    } // namespace SimpleBoolToggleProfilingSetting
} // namespace app::classes::types
