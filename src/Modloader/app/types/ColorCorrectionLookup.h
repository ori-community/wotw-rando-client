#pragma once
#include <Modloader/app/structs/ColorCorrectionLookup.h>
#include <Modloader/app/structs/ColorCorrectionLookup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorCorrectionLookup {
        inline app::ColorCorrectionLookup__Class** type_info() {
            static app::ColorCorrectionLookup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorCorrectionLookup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorCorrectionLookup__Class* get_class() {
            return il2cpp::get_class<app::ColorCorrectionLookup__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ColorCorrectionLookup");
        }
        inline app::ColorCorrectionLookup* create() {
            return il2cpp::create_object<app::ColorCorrectionLookup>(get_class());
        }
    } // namespace ColorCorrectionLookup
} // namespace app::classes::types
