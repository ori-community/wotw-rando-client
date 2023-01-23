#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_ColorCorrectionCurves__Class.h>
#include <Modloader/app/structs/ShaderID_ColorCorrectionCurves.h>

namespace app::classes::types {
    namespace ShaderID_ColorCorrectionCurves {
        inline app::ShaderID_ColorCorrectionCurves__Class** type_info = (app::ShaderID_ColorCorrectionCurves__Class**)(modloader::win::memory::resolve_rva(0x04741290));
        inline app::ShaderID_ColorCorrectionCurves__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ColorCorrectionCurves__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ColorCorrectionCurves");
        }
        inline app::ShaderID_ColorCorrectionCurves* create() {
            return il2cpp::create_object<app::ShaderID_ColorCorrectionCurves>(get_class());
        }
    } // namespace ShaderID_ColorCorrectionCurves
} // namespace app::classes::types
