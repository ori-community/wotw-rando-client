#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_GradientRampDynamic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_GradientRampDynamic__Class** type_info;
        inline app::ShaderID_GradientRampDynamic__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GradientRampDynamic__Class>(type_info, "Colorful", "ShaderID_GradientRampDynamic");
        }
        inline app::ShaderID_GradientRampDynamic* create() {
            return il2cpp::create_object<app::ShaderID_GradientRampDynamic>(get_class());
        }
    } // namespace ShaderID_GradientRampDynamic
} // namespace app::classes::types
