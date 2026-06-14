#pragma once
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess__Array.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess__Array {
        inline app::VerletPhysicsAnimationPostprocess__Array__Class** type_info() {
            static app::VerletPhysicsAnimationPostprocess__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletPhysicsAnimationPostprocess__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletPhysicsAnimationPostprocess__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletPhysicsAnimationPostprocess__Array__Class>(type_info(), "Moon", "VerletPhysicsAnimationPostprocess[]");
        }
        inline app::VerletPhysicsAnimationPostprocess__Array* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess__Array>(get_class());
        }
    } // namespace VerletPhysicsAnimationPostprocess__Array
} // namespace app::classes::types
