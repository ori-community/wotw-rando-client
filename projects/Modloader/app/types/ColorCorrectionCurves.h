#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColorCorrectionCurves__Class.h>
#include <Modloader/app/structs/ColorCorrectionCurves.h>

namespace app::classes::types {
    namespace ColorCorrectionCurves {
        namespace {
            inline app::ColorCorrectionCurves__Class* type_info_ref = nullptr;
        }
        inline app::ColorCorrectionCurves__Class** type_info = &type_info_ref;
        inline app::ColorCorrectionCurves__Class* get_class() {
            return il2cpp::get_class<app::ColorCorrectionCurves__Class>(type_info, "UnityStandardAssets.ImageEffects", "ColorCorrectionCurves");
        }
        inline app::ColorCorrectionCurves* create() {
            return il2cpp::create_object<app::ColorCorrectionCurves>(get_class());
        }
    } // namespace ColorCorrectionCurves
} // namespace app::classes::types
