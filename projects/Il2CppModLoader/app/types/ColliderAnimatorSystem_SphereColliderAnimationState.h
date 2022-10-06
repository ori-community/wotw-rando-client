#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColliderAnimatorSystem_SphereColliderAnimationState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColliderAnimatorSystem_SphereColliderAnimationState__Class** type_info;
        inline app::ColliderAnimatorSystem_SphereColliderAnimationState__Class* get_class() {
            return il2cpp::get_nested_class<app::ColliderAnimatorSystem_SphereColliderAnimationState__Class>(type_info, "", "ColliderAnimatorSystem", "SphereColliderAnimationState");
        }
        inline app::ColliderAnimatorSystem_SphereColliderAnimationState* create() {
            return il2cpp::create_object<app::ColliderAnimatorSystem_SphereColliderAnimationState>(get_class());
        }
        inline app::ColliderAnimatorSystem_SphereColliderAnimationState__Array* create_array(int size) {
            return il2cpp::array_new<app::ColliderAnimatorSystem_SphereColliderAnimationState__Array>(get_class(), size);
        }
        inline app::ColliderAnimatorSystem_SphereColliderAnimationState__Array* create_array(const std::vector<app::ColliderAnimatorSystem_SphereColliderAnimationState*>& items) {
            return il2cpp::array_new<app::ColliderAnimatorSystem_SphereColliderAnimationState__Array>(get_class(), items);
        }
    } // namespace ColliderAnimatorSystem_SphereColliderAnimationState
} // namespace app::classes::types
