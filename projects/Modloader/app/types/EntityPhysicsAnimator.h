#pragma once
#include <Modloader/app/structs/EntityPhysicsAnimator.h>
#include <Modloader/app/structs/EntityPhysicsAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityPhysicsAnimator {
        inline app::EntityPhysicsAnimator__Class** type_info() {
            static app::EntityPhysicsAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityPhysicsAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityPhysicsAnimator__Class* get_class() {
            return il2cpp::get_class<app::EntityPhysicsAnimator__Class>(type_info(), "Moon.Timeline", "EntityPhysicsAnimator");
        }
        inline app::EntityPhysicsAnimator* create() {
            return il2cpp::create_object<app::EntityPhysicsAnimator>(get_class());
        }
    } // namespace EntityPhysicsAnimator
} // namespace app::classes::types
