#pragma once
#include <Modloader/app/structs/AnimatedRigidBodyController.h>
#include <Modloader/app/structs/AnimatedRigidBodyController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatedRigidBodyController {
        inline app::AnimatedRigidBodyController__Class** type_info() {
            static app::AnimatedRigidBodyController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatedRigidBodyController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatedRigidBodyController__Class* get_class() {
            return il2cpp::get_class<app::AnimatedRigidBodyController__Class>(type_info(), "", "AnimatedRigidBodyController");
        }
        inline app::AnimatedRigidBodyController* create() {
            return il2cpp::create_object<app::AnimatedRigidBodyController>(get_class());
        }
    } // namespace AnimatedRigidBodyController
} // namespace app::classes::types
