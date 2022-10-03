#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SCurveContrast {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_SCurveContrast__Class** type_info;
        inline app::ShaderID_SCurveContrast__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SCurveContrast__Class>(type_info, "Colorful", "ShaderID_SCurveContrast");
        }
        inline app::ShaderID_SCurveContrast* create() {
            return il2cpp::create_object<app::ShaderID_SCurveContrast>(get_class());
        }
    } // namespace ShaderID_SCurveContrast
} // namespace app::classes::types
