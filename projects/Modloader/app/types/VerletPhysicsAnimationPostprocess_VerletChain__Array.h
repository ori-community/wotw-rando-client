#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_VerletChain__Array__Class.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_VerletChain__Array.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess_VerletChain__Array {
        namespace {
            inline app::VerletPhysicsAnimationPostprocess_VerletChain__Array__Class* type_info_ref = nullptr;
        }
        inline app::VerletPhysicsAnimationPostprocess_VerletChain__Array__Class** type_info = &type_info_ref;
        inline app::VerletPhysicsAnimationPostprocess_VerletChain__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletPhysicsAnimationPostprocess_VerletChain__Array__Class>(type_info, "Moon", "VerletPhysicsAnimationPostprocess+VerletChain[]");
        }
        inline app::VerletPhysicsAnimationPostprocess_VerletChain__Array* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess_VerletChain__Array>(get_class());
        }
    } // namespace VerletPhysicsAnimationPostprocess_VerletChain__Array
} // namespace app::classes::types
