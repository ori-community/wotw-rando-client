#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorVariationProfilingSetting {
        namespace {
            app::ColorVariationProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::ColorVariationProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ColorVariationProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ColorVariationProfilingSetting");
        }
        inline app::ColorVariationProfilingSetting* create() {
            return il2cpp::create_object<app::ColorVariationProfilingSetting>(get_class());
        }
    } // namespace ColorVariationProfilingSetting
} // namespace app::classes::types
