#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess_Job {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletPhysicsAnimationPostprocess_Job__Class** type_info;
        inline app::VerletPhysicsAnimationPostprocess_Job__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletPhysicsAnimationPostprocess_Job__Class>(type_info, "Moon", "VerletPhysicsAnimationPostprocess", "Job");
        }
        inline app::VerletPhysicsAnimationPostprocess_Job* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess_Job>(get_class());
        }
        inline app::VerletPhysicsAnimationPostprocess_Job__Boxed* box(app::VerletPhysicsAnimationPostprocess_Job value) {
            return il2cpp::box_value<app::VerletPhysicsAnimationPostprocess_Job__Boxed>(get_class(), value);
        }
    } // namespace VerletPhysicsAnimationPostprocess_Job
} // namespace app::classes::types
