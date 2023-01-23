#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess__Array__Class.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess__Array.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess__Array {
        namespace {
            inline app::VerletPhysicsAnimationPostprocess__Array__Class* type_info_ref = nullptr;
        }
        inline app::VerletPhysicsAnimationPostprocess__Array__Class** type_info = &type_info_ref;
        inline app::VerletPhysicsAnimationPostprocess__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletPhysicsAnimationPostprocess__Array__Class>(type_info, "Moon", "VerletPhysicsAnimationPostprocess[]");
        }
        inline app::VerletPhysicsAnimationPostprocess__Array* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess__Array>(get_class());
        }
    } // namespace VerletPhysicsAnimationPostprocess__Array
} // namespace app::classes::types
