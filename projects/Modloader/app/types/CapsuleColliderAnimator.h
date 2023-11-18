#pragma once
#include <Modloader/app/structs/CapsuleColliderAnimator.h>
#include <Modloader/app/structs/CapsuleColliderAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CapsuleColliderAnimator {
        inline app::CapsuleColliderAnimator__Class** type_info() {
            static app::CapsuleColliderAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CapsuleColliderAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CapsuleColliderAnimator__Class* get_class() {
            return il2cpp::get_class<app::CapsuleColliderAnimator__Class>(type_info(), "", "CapsuleColliderAnimator");
        }
        inline app::CapsuleColliderAnimator* create() {
            return il2cpp::create_object<app::CapsuleColliderAnimator>(get_class());
        }
    } // namespace CapsuleColliderAnimator
} // namespace app::classes::types
