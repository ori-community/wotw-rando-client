#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeashHookAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeashHookAnimator__Class** type_info;
        inline app::LeashHookAnimator__Class* get_class() {
            return il2cpp::get_class<app::LeashHookAnimator__Class>(type_info, "", "LeashHookAnimator");
        }
        inline app::LeashHookAnimator* create() {
            return il2cpp::create_object<app::LeashHookAnimator>(get_class());
        }
    } // namespace LeashHookAnimator
} // namespace app::classes::types
