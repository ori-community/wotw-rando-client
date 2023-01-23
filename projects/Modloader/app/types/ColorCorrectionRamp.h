#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColorCorrectionRamp__Class.h>
#include <Modloader/app/structs/ColorCorrectionRamp.h>

namespace app::classes::types {
    namespace ColorCorrectionRamp {
        namespace {
            inline app::ColorCorrectionRamp__Class* type_info_ref = nullptr;
        }
        inline app::ColorCorrectionRamp__Class** type_info = &type_info_ref;
        inline app::ColorCorrectionRamp__Class* get_class() {
            return il2cpp::get_class<app::ColorCorrectionRamp__Class>(type_info, "UnityStandardAssets.ImageEffects", "ColorCorrectionRamp");
        }
        inline app::ColorCorrectionRamp* create() {
            return il2cpp::create_object<app::ColorCorrectionRamp>(get_class());
        }
    } // namespace ColorCorrectionRamp
} // namespace app::classes::types
