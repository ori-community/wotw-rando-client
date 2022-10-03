#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisJumpAttackBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MantisJumpAttackBehaviour_c__Class** type_info;
        inline app::MantisJumpAttackBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisJumpAttackBehaviour_c__Class>(type_info, "", "MantisJumpAttackBehaviour", "<>c");
        }
        inline app::MantisJumpAttackBehaviour_c* create() {
            return il2cpp::create_object<app::MantisJumpAttackBehaviour_c>(get_class());
        }
    } // namespace MantisJumpAttackBehaviour_c
} // namespace app::classes::types
