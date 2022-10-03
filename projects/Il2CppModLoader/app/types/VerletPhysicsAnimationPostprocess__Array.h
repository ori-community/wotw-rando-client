#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess__Array {
        namespace {
            app::VerletPhysicsAnimationPostprocess__Array__Class* type_info_ref = nullptr;
        }
        app::VerletPhysicsAnimationPostprocess__Array__Class** type_info = &type_info_ref;
        inline app::VerletPhysicsAnimationPostprocess__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletPhysicsAnimationPostprocess__Array__Class>(type_info, "Moon", "VerletPhysicsAnimationPostprocess[]");
        }
        inline app::VerletPhysicsAnimationPostprocess__Array* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess__Array>(get_class());
        }
    } // namespace VerletPhysicsAnimationPostprocess__Array
} // namespace app::classes::types
