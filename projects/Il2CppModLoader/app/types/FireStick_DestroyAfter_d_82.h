#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FireStick_DestroyAfter_d_82 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FireStick_DestroyAfter_d_82__Class** type_info;
        inline app::FireStick_DestroyAfter_d_82__Class* get_class() {
            return il2cpp::get_nested_class<app::FireStick_DestroyAfter_d_82__Class>(type_info, "", "FireStick", "<DestroyAfter>d__82");
        }
        inline app::FireStick_DestroyAfter_d_82* create() {
            return il2cpp::create_object<app::FireStick_DestroyAfter_d_82>(get_class());
        }
    } // namespace FireStick_DestroyAfter_d_82
} // namespace app::classes::types
