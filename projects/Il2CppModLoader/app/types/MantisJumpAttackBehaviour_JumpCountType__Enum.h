#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisJumpAttackBehaviour_JumpCountType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MantisJumpAttackBehaviour_JumpCountType__Enum__Class** type_info;
        inline app::MantisJumpAttackBehaviour_JumpCountType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisJumpAttackBehaviour_JumpCountType__Enum__Class>(type_info, "", "MantisJumpAttackBehaviour", "JumpCountType");
        }
        inline app::MantisJumpAttackBehaviour_JumpCountType__Enum* create() {
            return il2cpp::create_object<app::MantisJumpAttackBehaviour_JumpCountType__Enum>(get_class());
        }
    } // namespace MantisJumpAttackBehaviour_JumpCountType__Enum
} // namespace app::classes::types
