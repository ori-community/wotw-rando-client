#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess_VerletChain {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletPhysicsAnimationPostprocess_VerletChain__Class** type_info;
        inline app::VerletPhysicsAnimationPostprocess_VerletChain__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletPhysicsAnimationPostprocess_VerletChain__Class>(type_info, "Moon", "VerletPhysicsAnimationPostprocess", "VerletChain");
        }
        inline app::VerletPhysicsAnimationPostprocess_VerletChain* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess_VerletChain>(get_class());
        }
        inline app::VerletPhysicsAnimationPostprocess_VerletChain__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletPhysicsAnimationPostprocess_VerletChain__Array>(get_class(), size);
        }
    } // namespace VerletPhysicsAnimationPostprocess_VerletChain
} // namespace app::classes::types
