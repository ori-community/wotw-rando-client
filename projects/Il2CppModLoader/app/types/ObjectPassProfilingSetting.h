#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectPassProfilingSetting {
        namespace {
            app::ObjectPassProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::ObjectPassProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ObjectPassProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ObjectPassProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ObjectPassProfilingSetting");
        }
        inline app::ObjectPassProfilingSetting* create() {
            return il2cpp::create_object<app::ObjectPassProfilingSetting>(get_class());
        }
    } // namespace ObjectPassProfilingSetting
} // namespace app::classes::types
