#pragma once
#include <Modloader/app/structs/SphereColliderAnimator.h>
#include <Modloader/app/structs/SphereColliderAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SphereColliderAnimator {
        inline app::SphereColliderAnimator__Class** type_info() {
            static app::SphereColliderAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SphereColliderAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SphereColliderAnimator__Class* get_class() {
            return il2cpp::get_class<app::SphereColliderAnimator__Class>(type_info(), "", "SphereColliderAnimator");
        }
        inline app::SphereColliderAnimator* create() {
            return il2cpp::create_object<app::SphereColliderAnimator>(get_class());
        }
    } // namespace SphereColliderAnimator
} // namespace app::classes::types
