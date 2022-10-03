#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisHorizontalJumpAttackBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MantisHorizontalJumpAttackBehaviour_c__Class** type_info;
        inline app::MantisHorizontalJumpAttackBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisHorizontalJumpAttackBehaviour_c__Class>(type_info, "", "MantisHorizontalJumpAttackBehaviour", "<>c");
        }
        inline app::MantisHorizontalJumpAttackBehaviour_c* create() {
            return il2cpp::create_object<app::MantisHorizontalJumpAttackBehaviour_c>(get_class());
        }
    } // namespace MantisHorizontalJumpAttackBehaviour_c
} // namespace app::classes::types
