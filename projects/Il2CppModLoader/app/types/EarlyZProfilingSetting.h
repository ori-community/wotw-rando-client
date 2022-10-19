#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EarlyZProfilingSetting {
        namespace {
            inline app::EarlyZProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::EarlyZProfilingSetting__Class** type_info = &type_info_ref;
        inline app::EarlyZProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EarlyZProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "EarlyZProfilingSetting");
        }
        inline app::EarlyZProfilingSetting* create() {
            return il2cpp::create_object<app::EarlyZProfilingSetting>(get_class());
        }
    } // namespace EarlyZProfilingSetting
} // namespace app::classes::types
