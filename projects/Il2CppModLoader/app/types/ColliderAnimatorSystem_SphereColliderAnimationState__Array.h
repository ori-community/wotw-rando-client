#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColliderAnimatorSystem_SphereColliderAnimationState__Array {
        namespace {
            inline app::ColliderAnimatorSystem_SphereColliderAnimationState__Array__Class* type_info_ref = nullptr;
        }
        inline app::ColliderAnimatorSystem_SphereColliderAnimationState__Array__Class** type_info = &type_info_ref;
        inline app::ColliderAnimatorSystem_SphereColliderAnimationState__Array__Class* get_class() {
            return il2cpp::get_class<app::ColliderAnimatorSystem_SphereColliderAnimationState__Array__Class>(type_info, "", "ColliderAnimatorSystem+SphereColliderAnimationState[]");
        }
        inline app::ColliderAnimatorSystem_SphereColliderAnimationState__Array* create() {
            return il2cpp::create_object<app::ColliderAnimatorSystem_SphereColliderAnimationState__Array>(get_class());
        }
    } // namespace ColliderAnimatorSystem_SphereColliderAnimationState__Array
} // namespace app::classes::types
