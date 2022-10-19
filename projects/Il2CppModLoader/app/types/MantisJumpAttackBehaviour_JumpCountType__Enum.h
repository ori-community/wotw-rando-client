#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MantisJumpAttackBehaviour_JumpCountType__Enum {
        inline app::MantisJumpAttackBehaviour_JumpCountType__Enum__Class** type_info = (app::MantisJumpAttackBehaviour_JumpCountType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04786BE8));
        inline app::MantisJumpAttackBehaviour_JumpCountType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisJumpAttackBehaviour_JumpCountType__Enum__Class>(type_info, "", "MantisJumpAttackBehaviour", "JumpCountType");
        }
        inline app::MantisJumpAttackBehaviour_JumpCountType__Enum* create() {
            return il2cpp::create_object<app::MantisJumpAttackBehaviour_JumpCountType__Enum>(get_class());
        }
    } // namespace MantisJumpAttackBehaviour_JumpCountType__Enum
} // namespace app::classes::types
