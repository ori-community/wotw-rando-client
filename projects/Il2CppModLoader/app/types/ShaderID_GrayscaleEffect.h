#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_GrayscaleEffect {
        inline app::ShaderID_GrayscaleEffect__Class** type_info = (app::ShaderID_GrayscaleEffect__Class**)(modloader::win::memory::resolve_rva(0x04731768));
        inline app::ShaderID_GrayscaleEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GrayscaleEffect__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_GrayscaleEffect");
        }
        inline app::ShaderID_GrayscaleEffect* create() {
            return il2cpp::create_object<app::ShaderID_GrayscaleEffect>(get_class());
        }
    } // namespace ShaderID_GrayscaleEffect
} // namespace app::classes::types
