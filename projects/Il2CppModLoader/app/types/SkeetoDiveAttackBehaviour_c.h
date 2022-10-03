#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoDiveAttackBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkeetoDiveAttackBehaviour_c__Class** type_info;
        inline app::SkeetoDiveAttackBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoDiveAttackBehaviour_c__Class>(type_info, "", "SkeetoDiveAttackBehaviour", "<>c");
        }
        inline app::SkeetoDiveAttackBehaviour_c* create() {
            return il2cpp::create_object<app::SkeetoDiveAttackBehaviour_c>(get_class());
        }
    } // namespace SkeetoDiveAttackBehaviour_c
} // namespace app::classes::types
