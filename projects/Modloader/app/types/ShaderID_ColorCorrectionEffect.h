#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_ColorCorrectionEffect {
        inline app::ShaderID_ColorCorrectionEffect__Class** type_info = (app::ShaderID_ColorCorrectionEffect__Class**)(modloader::win::memory::resolve_rva(0x0477B9C8));
        inline app::ShaderID_ColorCorrectionEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ColorCorrectionEffect__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ColorCorrectionEffect");
        }
        inline app::ShaderID_ColorCorrectionEffect* create() {
            return il2cpp::create_object<app::ShaderID_ColorCorrectionEffect>(get_class());
        }
    } // namespace ShaderID_ColorCorrectionEffect
} // namespace app::classes::types
