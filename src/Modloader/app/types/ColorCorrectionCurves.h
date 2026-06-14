#pragma once
#include <Modloader/app/structs/ColorCorrectionCurves.h>
#include <Modloader/app/structs/ColorCorrectionCurves__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorCorrectionCurves {
        inline app::ColorCorrectionCurves__Class** type_info() {
            static app::ColorCorrectionCurves__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorCorrectionCurves__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorCorrectionCurves__Class* get_class() {
            return il2cpp::get_class<app::ColorCorrectionCurves__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ColorCorrectionCurves");
        }
        inline app::ColorCorrectionCurves* create() {
            return il2cpp::create_object<app::ColorCorrectionCurves>(get_class());
        }
    } // namespace ColorCorrectionCurves
} // namespace app::classes::types
