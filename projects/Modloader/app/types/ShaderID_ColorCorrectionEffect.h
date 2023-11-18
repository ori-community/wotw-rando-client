#pragma once
#include <Modloader/app/structs/ShaderID_ColorCorrectionEffect.h>
#include <Modloader/app/structs/ShaderID_ColorCorrectionEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ColorCorrectionEffect {
        inline app::ShaderID_ColorCorrectionEffect__Class** type_info() {
            static app::ShaderID_ColorCorrectionEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ColorCorrectionEffect__Class**)(modloader::win::memory::resolve_rva(0x0477B9C8));
            }
            return cache;
        }
        inline app::ShaderID_ColorCorrectionEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ColorCorrectionEffect__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_ColorCorrectionEffect");
        }
        inline app::ShaderID_ColorCorrectionEffect* create() {
            return il2cpp::create_object<app::ShaderID_ColorCorrectionEffect>(get_class());
        }
    } // namespace ShaderID_ColorCorrectionEffect
} // namespace app::classes::types
