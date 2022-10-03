#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_HoldableRigidBody {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_HoldableRigidBody__Class** type_info;
        inline app::ShaderID_HoldableRigidBody__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_HoldableRigidBody__Class>(type_info, "", "ShaderID_HoldableRigidBody");
        }
        inline app::ShaderID_HoldableRigidBody* create() {
            return il2cpp::create_object<app::ShaderID_HoldableRigidBody>(get_class());
        }
    } // namespace ShaderID_HoldableRigidBody
} // namespace app::classes::types
