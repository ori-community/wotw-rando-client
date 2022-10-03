#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputLockAnimator {
        namespace {
            app::InputLockAnimator__Class* type_info_ref = nullptr;
        }
        app::InputLockAnimator__Class** type_info = &type_info_ref;
        inline app::InputLockAnimator__Class* get_class() {
            return il2cpp::get_class<app::InputLockAnimator__Class>(type_info, "", "InputLockAnimator");
        }
        inline app::InputLockAnimator* create() {
            return il2cpp::create_object<app::InputLockAnimator>(get_class());
        }
    } // namespace InputLockAnimator
} // namespace app::classes::types
