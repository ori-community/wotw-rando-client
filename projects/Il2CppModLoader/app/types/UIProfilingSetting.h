#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UIProfilingSetting {
        namespace {
            app::UIProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::UIProfilingSetting__Class** type_info = &type_info_ref;
        inline app::UIProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::UIProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "UIProfilingSetting");
        }
        inline app::UIProfilingSetting* create() {
            return il2cpp::create_object<app::UIProfilingSetting>(get_class());
        }
    } // namespace UIProfilingSetting
} // namespace app::classes::types
