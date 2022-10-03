#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TAAProfilingSetting {
        namespace {
            app::TAAProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::TAAProfilingSetting__Class** type_info = &type_info_ref;
        inline app::TAAProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TAAProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "TAAProfilingSetting");
        }
        inline app::TAAProfilingSetting* create() {
            return il2cpp::create_object<app::TAAProfilingSetting>(get_class());
        }
    } // namespace TAAProfilingSetting
} // namespace app::classes::types
