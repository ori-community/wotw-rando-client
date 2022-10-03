#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RefractionProfilingSetting {
        namespace {
            app::RefractionProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::RefractionProfilingSetting__Class** type_info = &type_info_ref;
        inline app::RefractionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::RefractionProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "RefractionProfilingSetting");
        }
        inline app::RefractionProfilingSetting* create() {
            return il2cpp::create_object<app::RefractionProfilingSetting>(get_class());
        }
    } // namespace RefractionProfilingSetting
} // namespace app::classes::types
