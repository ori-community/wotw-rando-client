#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FXAAProfilingSetting {
        namespace {
            app::FXAAProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::FXAAProfilingSetting__Class** type_info = &type_info_ref;
        inline app::FXAAProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::FXAAProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "FXAAProfilingSetting");
        }
        inline app::FXAAProfilingSetting* create() {
            return il2cpp::create_object<app::FXAAProfilingSetting>(get_class());
        }
    } // namespace FXAAProfilingSetting
} // namespace app::classes::types
