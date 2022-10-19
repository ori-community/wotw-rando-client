#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MantisJumpAttackBehaviour_c {
        inline app::MantisJumpAttackBehaviour_c__Class** type_info = (app::MantisJumpAttackBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x047165B8));
        inline app::MantisJumpAttackBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisJumpAttackBehaviour_c__Class>(type_info, "", "MantisJumpAttackBehaviour", "<>c");
        }
        inline app::MantisJumpAttackBehaviour_c* create() {
            return il2cpp::create_object<app::MantisJumpAttackBehaviour_c>(get_class());
        }
    } // namespace MantisJumpAttackBehaviour_c
} // namespace app::classes::types
