#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterReflectionProfilingSetting {
        namespace {
            app::WaterReflectionProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::WaterReflectionProfilingSetting__Class** type_info = &type_info_ref;
        inline app::WaterReflectionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::WaterReflectionProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "WaterReflectionProfilingSetting");
        }
        inline app::WaterReflectionProfilingSetting* create() {
            return il2cpp::create_object<app::WaterReflectionProfilingSetting>(get_class());
        }
    } // namespace WaterReflectionProfilingSetting
} // namespace app::classes::types
