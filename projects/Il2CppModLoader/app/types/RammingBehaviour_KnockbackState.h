#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_KnockbackState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingBehaviour_KnockbackState__Class** type_info;
        inline app::RammingBehaviour_KnockbackState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_KnockbackState__Class>(type_info, "Moon", "RammingBehaviour", "KnockbackState");
        }
        inline app::RammingBehaviour_KnockbackState* create() {
            return il2cpp::create_object<app::RammingBehaviour_KnockbackState>(get_class());
        }
    } // namespace RammingBehaviour_KnockbackState
} // namespace app::classes::types
