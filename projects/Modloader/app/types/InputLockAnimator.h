#pragma once
#include <Modloader/app/structs/InputLockAnimator.h>
#include <Modloader/app/structs/InputLockAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputLockAnimator {
        inline app::InputLockAnimator__Class** type_info() {
            static app::InputLockAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InputLockAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InputLockAnimator__Class* get_class() {
            return il2cpp::get_class<app::InputLockAnimator__Class>(type_info(), "", "InputLockAnimator");
        }
        inline app::InputLockAnimator* create() {
            return il2cpp::create_object<app::InputLockAnimator>(get_class());
        }
    } // namespace InputLockAnimator
} // namespace app::classes::types
