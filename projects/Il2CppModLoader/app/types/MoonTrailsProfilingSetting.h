#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTrailsProfilingSetting {
        namespace {
            inline app::MoonTrailsProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::MoonTrailsProfilingSetting__Class** type_info = &type_info_ref;
        inline app::MoonTrailsProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailsProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "MoonTrailsProfilingSetting");
        }
        inline app::MoonTrailsProfilingSetting* create() {
            return il2cpp::create_object<app::MoonTrailsProfilingSetting>(get_class());
        }
    } // namespace MoonTrailsProfilingSetting
} // namespace app::classes::types
