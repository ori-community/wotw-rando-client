#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_TiltShift {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_TiltShift__Class** type_info;
        inline app::ShaderID_TiltShift__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_TiltShift__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_TiltShift");
        }
        inline app::ShaderID_TiltShift* create() {
            return il2cpp::create_object<app::ShaderID_TiltShift>(get_class());
        }
    } // namespace ShaderID_TiltShift
} // namespace app::classes::types
