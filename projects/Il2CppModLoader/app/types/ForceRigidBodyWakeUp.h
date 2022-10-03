#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ForceRigidBodyWakeUp {
        namespace {
            app::ForceRigidBodyWakeUp__Class* type_info_ref = nullptr;
        }
        app::ForceRigidBodyWakeUp__Class** type_info = &type_info_ref;
        inline app::ForceRigidBodyWakeUp__Class* get_class() {
            return il2cpp::get_class<app::ForceRigidBodyWakeUp__Class>(type_info, "", "ForceRigidBodyWakeUp");
        }
        inline app::ForceRigidBodyWakeUp* create() {
            return il2cpp::create_object<app::ForceRigidBodyWakeUp>(get_class());
        }
    } // namespace ForceRigidBodyWakeUp
} // namespace app::classes::types
