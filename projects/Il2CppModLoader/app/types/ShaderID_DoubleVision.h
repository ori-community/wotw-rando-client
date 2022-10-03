#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DoubleVision {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_DoubleVision__Class** type_info;
        inline app::ShaderID_DoubleVision__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DoubleVision__Class>(type_info, "Colorful", "ShaderID_DoubleVision");
        }
        inline app::ShaderID_DoubleVision* create() {
            return il2cpp::create_object<app::ShaderID_DoubleVision>(get_class());
        }
    } // namespace ShaderID_DoubleVision
} // namespace app::classes::types
