#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrightnessZoneModifier {
        namespace {
            app::BrightnessZoneModifier__Class* type_info_ref = nullptr;
        }
        app::BrightnessZoneModifier__Class** type_info = &type_info_ref;
        inline app::BrightnessZoneModifier__Class* get_class() {
            return il2cpp::get_class<app::BrightnessZoneModifier__Class>(type_info, "", "BrightnessZoneModifier");
        }
        inline app::BrightnessZoneModifier* create() {
            return il2cpp::create_object<app::BrightnessZoneModifier>(get_class());
        }
    } // namespace BrightnessZoneModifier
} // namespace app::classes::types
