#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EmissivityProfilingSetting {
        namespace {
            inline app::EmissivityProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::EmissivityProfilingSetting__Class** type_info = &type_info_ref;
        inline app::EmissivityProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EmissivityProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "EmissivityProfilingSetting");
        }
        inline app::EmissivityProfilingSetting* create() {
            return il2cpp::create_object<app::EmissivityProfilingSetting>(get_class());
        }
    } // namespace EmissivityProfilingSetting
} // namespace app::classes::types
