#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_NoiseEffect {
        inline app::ShaderID_NoiseEffect__Class** type_info = (app::ShaderID_NoiseEffect__Class**)(modloader::win::memory::resolve_rva(0x0472D978));
        inline app::ShaderID_NoiseEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_NoiseEffect__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_NoiseEffect");
        }
        inline app::ShaderID_NoiseEffect* create() {
            return il2cpp::create_object<app::ShaderID_NoiseEffect>(get_class());
        }
    } // namespace ShaderID_NoiseEffect
} // namespace app::classes::types
