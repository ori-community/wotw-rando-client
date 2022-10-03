#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorCorrectionCurves {
        namespace {
            app::ColorCorrectionCurves__Class* type_info_ref = nullptr;
        }
        app::ColorCorrectionCurves__Class** type_info = &type_info_ref;
        inline app::ColorCorrectionCurves__Class* get_class() {
            return il2cpp::get_class<app::ColorCorrectionCurves__Class>(type_info, "UnityStandardAssets.ImageEffects", "ColorCorrectionCurves");
        }
        inline app::ColorCorrectionCurves* create() {
            return il2cpp::create_object<app::ColorCorrectionCurves>(get_class());
        }
    } // namespace ColorCorrectionCurves
} // namespace app::classes::types
