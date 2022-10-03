#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorVariationZoneModifier {
        namespace {
            app::ColorVariationZoneModifier__Class* type_info_ref = nullptr;
        }
        app::ColorVariationZoneModifier__Class** type_info = &type_info_ref;
        inline app::ColorVariationZoneModifier__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationZoneModifier__Class>(type_info, "", "ColorVariationZoneModifier");
        }
        inline app::ColorVariationZoneModifier* create() {
            return il2cpp::create_object<app::ColorVariationZoneModifier>(get_class());
        }
    } // namespace ColorVariationZoneModifier
} // namespace app::classes::types
