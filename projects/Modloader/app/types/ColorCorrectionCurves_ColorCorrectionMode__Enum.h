#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColorCorrectionCurves_ColorCorrectionMode__Enum__Class.h>
#include <Modloader/app/structs/ColorCorrectionCurves_ColorCorrectionMode__Enum.h>

namespace app::classes::types {
    namespace ColorCorrectionCurves_ColorCorrectionMode__Enum {
        namespace {
            inline app::ColorCorrectionCurves_ColorCorrectionMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ColorCorrectionCurves_ColorCorrectionMode__Enum__Class** type_info = &type_info_ref;
        inline app::ColorCorrectionCurves_ColorCorrectionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorCorrectionCurves_ColorCorrectionMode__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "ColorCorrectionCurves", "ColorCorrectionMode");
        }
        inline app::ColorCorrectionCurves_ColorCorrectionMode__Enum* create() {
            return il2cpp::create_object<app::ColorCorrectionCurves_ColorCorrectionMode__Enum>(get_class());
        }
    } // namespace ColorCorrectionCurves_ColorCorrectionMode__Enum
} // namespace app::classes::types
