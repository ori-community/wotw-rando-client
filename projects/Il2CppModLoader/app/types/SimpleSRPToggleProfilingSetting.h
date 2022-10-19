#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleSRPToggleProfilingSetting {
        namespace {
            inline app::SimpleSRPToggleProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::SimpleSRPToggleProfilingSetting__Class** type_info = &type_info_ref;
        inline app::SimpleSRPToggleProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::SimpleSRPToggleProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "SimpleSRPToggleProfilingSetting");
        }
        inline app::SimpleSRPToggleProfilingSetting* create() {
            return il2cpp::create_object<app::SimpleSRPToggleProfilingSetting>(get_class());
        }
    } // namespace SimpleSRPToggleProfilingSetting
} // namespace app::classes::types
