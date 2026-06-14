#pragma once
#include <Modloader/app/structs/ColorVariationZoneModifier.h>
#include <Modloader/app/structs/ColorVariationZoneModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorVariationZoneModifier {
        inline app::ColorVariationZoneModifier__Class** type_info() {
            static app::ColorVariationZoneModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorVariationZoneModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorVariationZoneModifier__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationZoneModifier__Class>(type_info(), "", "ColorVariationZoneModifier");
        }
        inline app::ColorVariationZoneModifier* create() {
            return il2cpp::create_object<app::ColorVariationZoneModifier>(get_class());
        }
    } // namespace ColorVariationZoneModifier
} // namespace app::classes::types
