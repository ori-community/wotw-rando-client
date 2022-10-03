#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatedRigidBodyController {
        namespace {
            app::AnimatedRigidBodyController__Class* type_info_ref = nullptr;
        }
        app::AnimatedRigidBodyController__Class** type_info = &type_info_ref;
        inline app::AnimatedRigidBodyController__Class* get_class() {
            return il2cpp::get_class<app::AnimatedRigidBodyController__Class>(type_info, "", "AnimatedRigidBodyController");
        }
        inline app::AnimatedRigidBodyController* create() {
            return il2cpp::create_object<app::AnimatedRigidBodyController>(get_class());
        }
    } // namespace AnimatedRigidBodyController
} // namespace app::classes::types
