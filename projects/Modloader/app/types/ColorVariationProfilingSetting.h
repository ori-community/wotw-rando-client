#pragma once
#include <Modloader/app/structs/ColorVariationProfilingSetting.h>
#include <Modloader/app/structs/ColorVariationProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorVariationProfilingSetting {
        inline app::ColorVariationProfilingSetting__Class** type_info() {
            static app::ColorVariationProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorVariationProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorVariationProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ColorVariationProfilingSetting");
        }
        inline app::ColorVariationProfilingSetting* create() {
            return il2cpp::create_object<app::ColorVariationProfilingSetting>(get_class());
        }
    } // namespace ColorVariationProfilingSetting
} // namespace app::classes::types
