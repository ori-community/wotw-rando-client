#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleBoolToggleProfilingSetting {
        namespace {
            inline app::SimpleBoolToggleProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::SimpleBoolToggleProfilingSetting__Class** type_info = &type_info_ref;
        inline app::SimpleBoolToggleProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::SimpleBoolToggleProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "SimpleBoolToggleProfilingSetting");
        }
        inline app::SimpleBoolToggleProfilingSetting* create() {
            return il2cpp::create_object<app::SimpleBoolToggleProfilingSetting>(get_class());
        }
    } // namespace SimpleBoolToggleProfilingSetting
} // namespace app::classes::types
