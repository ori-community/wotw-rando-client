#pragma once
#include <Modloader/app/structs/ColorCorrectionCurves_ColorCorrectionMode__Enum.h>
#include <Modloader/app/structs/ColorCorrectionCurves_ColorCorrectionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorCorrectionCurves_ColorCorrectionMode__Enum {
        inline app::ColorCorrectionCurves_ColorCorrectionMode__Enum__Class** type_info() {
            static app::ColorCorrectionCurves_ColorCorrectionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorCorrectionCurves_ColorCorrectionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorCorrectionCurves_ColorCorrectionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorCorrectionCurves_ColorCorrectionMode__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ColorCorrectionCurves", "ColorCorrectionMode");
        }
        inline app::ColorCorrectionCurves_ColorCorrectionMode__Enum* create() {
            return il2cpp::create_object<app::ColorCorrectionCurves_ColorCorrectionMode__Enum>(get_class());
        }
    } // namespace ColorCorrectionCurves_ColorCorrectionMode__Enum
} // namespace app::classes::types
