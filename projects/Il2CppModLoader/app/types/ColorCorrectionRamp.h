#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorCorrectionRamp {
        namespace {
            app::ColorCorrectionRamp__Class* type_info_ref = nullptr;
        }
        app::ColorCorrectionRamp__Class** type_info = &type_info_ref;
        inline app::ColorCorrectionRamp__Class* get_class() {
            return il2cpp::get_class<app::ColorCorrectionRamp__Class>(type_info, "UnityStandardAssets.ImageEffects", "ColorCorrectionRamp");
        }
        inline app::ColorCorrectionRamp* create() {
            return il2cpp::create_object<app::ColorCorrectionRamp>(get_class());
        }
    } // namespace ColorCorrectionRamp
} // namespace app::classes::types
