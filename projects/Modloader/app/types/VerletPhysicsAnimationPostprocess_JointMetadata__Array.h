#pragma once
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_JointMetadata__Array.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_JointMetadata__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess_JointMetadata__Array {
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Array__Class** type_info() {
            static app::VerletPhysicsAnimationPostprocess_JointMetadata__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletPhysicsAnimationPostprocess_JointMetadata__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletPhysicsAnimationPostprocess_JointMetadata__Array__Class>(type_info(), "Moon", "VerletPhysicsAnimationPostprocess+JointMetadata[]");
        }
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Array* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess_JointMetadata__Array>(get_class());
        }
    } // namespace VerletPhysicsAnimationPostprocess_JointMetadata__Array
} // namespace app::classes::types
