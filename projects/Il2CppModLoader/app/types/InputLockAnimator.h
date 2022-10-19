#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputLockAnimator {
        namespace {
            inline app::InputLockAnimator__Class* type_info_ref = nullptr;
        }
        inline app::InputLockAnimator__Class** type_info = &type_info_ref;
        inline app::InputLockAnimator__Class* get_class() {
            return il2cpp::get_class<app::InputLockAnimator__Class>(type_info, "", "InputLockAnimator");
        }
        inline app::InputLockAnimator* create() {
            return il2cpp::create_object<app::InputLockAnimator>(get_class());
        }
    } // namespace InputLockAnimator
} // namespace app::classes::types
