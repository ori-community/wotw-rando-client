#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SphereColliderAnimator {
        namespace {
            app::SphereColliderAnimator__Class* type_info_ref = nullptr;
        }
        app::SphereColliderAnimator__Class** type_info = &type_info_ref;
        inline app::SphereColliderAnimator__Class* get_class() {
            return il2cpp::get_class<app::SphereColliderAnimator__Class>(type_info, "", "SphereColliderAnimator");
        }
        inline app::SphereColliderAnimator* create() {
            return il2cpp::create_object<app::SphereColliderAnimator>(get_class());
        }
    } // namespace SphereColliderAnimator
} // namespace app::classes::types
