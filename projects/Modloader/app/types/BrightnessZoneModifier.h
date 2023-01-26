#pragma once
#include <Modloader/app/structs/BrightnessZoneModifier.h>
#include <Modloader/app/structs/BrightnessZoneModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrightnessZoneModifier {
        inline app::BrightnessZoneModifier__Class** type_info() {
            static app::BrightnessZoneModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrightnessZoneModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrightnessZoneModifier__Class* get_class() {
            return il2cpp::get_class<app::BrightnessZoneModifier__Class>(type_info(), "", "BrightnessZoneModifier");
        }
        inline app::BrightnessZoneModifier* create() {
            return il2cpp::create_object<app::BrightnessZoneModifier>(get_class());
        }
    } // namespace BrightnessZoneModifier
} // namespace app::classes::types
