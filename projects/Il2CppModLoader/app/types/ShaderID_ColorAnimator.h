#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ColorAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ColorAnimator__Class** type_info;
        inline app::ShaderID_ColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ColorAnimator__Class>(type_info, "", "ShaderID_ColorAnimator");
        }
        inline app::ShaderID_ColorAnimator* create() {
            return il2cpp::create_object<app::ShaderID_ColorAnimator>(get_class());
        }
    } // namespace ShaderID_ColorAnimator
} // namespace app::classes::types
