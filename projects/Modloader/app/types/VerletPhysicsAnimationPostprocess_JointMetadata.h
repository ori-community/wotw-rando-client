#pragma once
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_JointMetadata.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_JointMetadata__Array.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_JointMetadata__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess_JointMetadata {
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Class** type_info() {
            static app::VerletPhysicsAnimationPostprocess_JointMetadata__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VerletPhysicsAnimationPostprocess_JointMetadata__Class**)(modloader::win::memory::resolve_rva(0x0472CE28));
            }
            return cache;
        }
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletPhysicsAnimationPostprocess_JointMetadata__Class>(type_info(), "Moon", "VerletPhysicsAnimationPostprocess", "JointMetadata");
        }
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess_JointMetadata>(get_class());
        }
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletPhysicsAnimationPostprocess_JointMetadata__Array>(get_class(), size);
        }
        inline app::VerletPhysicsAnimationPostprocess_JointMetadata__Array* create_array(const std::vector<app::VerletPhysicsAnimationPostprocess_JointMetadata*>& items) {
            return il2cpp::array_new<app::VerletPhysicsAnimationPostprocess_JointMetadata__Array>(get_class(), items);
        }
    } // namespace VerletPhysicsAnimationPostprocess_JointMetadata
} // namespace app::classes::types
