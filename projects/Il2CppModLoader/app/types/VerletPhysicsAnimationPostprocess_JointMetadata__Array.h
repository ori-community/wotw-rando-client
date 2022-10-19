#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess_JointMetadata__Array {
        namespace {
            inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Array__Class* type_info_ref = nullptr;
        }
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Array__Class** type_info = &type_info_ref;
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletPhysicsAnimationPostprocess_JointMetadata__Array__Class>(type_info, "Moon", "VerletPhysicsAnimationPostprocess+JointMetadata[]");
        }
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Array* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess_JointMetadata__Array>(get_class());
        }
    } // namespace VerletPhysicsAnimationPostprocess_JointMetadata__Array
} // namespace app::classes::types
