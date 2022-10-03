#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SimpleLocomotion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_SimpleLocomotion__Class** type_info;
        inline app::ShaderID_SimpleLocomotion__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SimpleLocomotion__Class>(type_info, "RootMotion.Demos", "ShaderID_SimpleLocomotion");
        }
        inline app::ShaderID_SimpleLocomotion* create() {
            return il2cpp::create_object<app::ShaderID_SimpleLocomotion>(get_class());
        }
    } // namespace ShaderID_SimpleLocomotion
} // namespace app::classes::types
