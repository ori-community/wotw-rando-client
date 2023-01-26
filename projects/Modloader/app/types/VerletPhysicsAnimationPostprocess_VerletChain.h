#pragma once
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_VerletChain.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_VerletChain__Array.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_VerletChain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletPhysicsAnimationPostprocess_VerletChain {
        inline app::VerletPhysicsAnimationPostprocess_VerletChain__Class** type_info() {
            static app::VerletPhysicsAnimationPostprocess_VerletChain__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VerletPhysicsAnimationPostprocess_VerletChain__Class**)(modloader::win::memory::resolve_rva(0x047050E0));
            }
            return cache;
        }
        inline app::VerletPhysicsAnimationPostprocess_VerletChain__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletPhysicsAnimationPostprocess_VerletChain__Class>(type_info(), "Moon", "VerletPhysicsAnimationPostprocess", "VerletChain");
        }
        inline app::VerletPhysicsAnimationPostprocess_VerletChain* create() {
            return il2cpp::create_object<app::VerletPhysicsAnimationPostprocess_VerletChain>(get_class());
        }
        inline app::VerletPhysicsAnimationPostprocess_VerletChain__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletPhysicsAnimationPostprocess_VerletChain__Array>(get_class(), size);
        }
        inline app::VerletPhysicsAnimationPostprocess_VerletChain__Array* create_array(const std::vector<app::VerletPhysicsAnimationPostprocess_VerletChain*>& items) {
            return il2cpp::array_new<app::VerletPhysicsAnimationPostprocess_VerletChain__Array>(get_class(), items);
        }
    } // namespace VerletPhysicsAnimationPostprocess_VerletChain
} // namespace app::classes::types
