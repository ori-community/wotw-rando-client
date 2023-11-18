#pragma once
#include <Modloader/app/structs/ColorCorrectionRamp.h>
#include <Modloader/app/structs/ColorCorrectionRamp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorCorrectionRamp {
        inline app::ColorCorrectionRamp__Class** type_info() {
            static app::ColorCorrectionRamp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorCorrectionRamp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorCorrectionRamp__Class* get_class() {
            return il2cpp::get_class<app::ColorCorrectionRamp__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ColorCorrectionRamp");
        }
        inline app::ColorCorrectionRamp* create() {
            return il2cpp::create_object<app::ColorCorrectionRamp>(get_class());
        }
    } // namespace ColorCorrectionRamp
} // namespace app::classes::types
