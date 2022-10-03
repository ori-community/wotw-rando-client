#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PotatoModeProfilingSetting {
        namespace {
            app::PotatoModeProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::PotatoModeProfilingSetting__Class** type_info = &type_info_ref;
        inline app::PotatoModeProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::PotatoModeProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "PotatoModeProfilingSetting");
        }
        inline app::PotatoModeProfilingSetting* create() {
            return il2cpp::create_object<app::PotatoModeProfilingSetting>(get_class());
        }
    } // namespace PotatoModeProfilingSetting
} // namespace app::classes::types
