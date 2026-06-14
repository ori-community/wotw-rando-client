#pragma once
#include <Modloader/app/structs/ColliderAnimatorSystem_SphereColliderAnimationState__Array.h>
#include <Modloader/app/structs/ColliderAnimatorSystem_SphereColliderAnimationState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColliderAnimatorSystem_SphereColliderAnimationState__Array {
        inline app::ColliderAnimatorSystem_SphereColliderAnimationState__Array__Class** type_info() {
            static app::ColliderAnimatorSystem_SphereColliderAnimationState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColliderAnimatorSystem_SphereColliderAnimationState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColliderAnimatorSystem_SphereColliderAnimationState__Array__Class* get_class() {
            return il2cpp::get_class<app::ColliderAnimatorSystem_SphereColliderAnimationState__Array__Class>(type_info(), "", "ColliderAnimatorSystem+SphereColliderAnimationState[]");
        }
        inline app::ColliderAnimatorSystem_SphereColliderAnimationState__Array* create() {
            return il2cpp::create_object<app::ColliderAnimatorSystem_SphereColliderAnimationState__Array>(get_class());
        }
    } // namespace ColliderAnimatorSystem_SphereColliderAnimationState__Array
} // namespace app::classes::types
