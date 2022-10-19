#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormJumpAttackBehaviour_c_DisplayClass40_0 {
        inline app::SandWormJumpAttackBehaviour_c_DisplayClass40_0__Class** type_info = (app::SandWormJumpAttackBehaviour_c_DisplayClass40_0__Class**)(modloader::win::memory::resolve_rva(0x04721668));
        inline app::SandWormJumpAttackBehaviour_c_DisplayClass40_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormJumpAttackBehaviour_c_DisplayClass40_0__Class>(type_info, "", "SandWormJumpAttackBehaviour", "<>c__DisplayClass40_0");
        }
        inline app::SandWormJumpAttackBehaviour_c_DisplayClass40_0* create() {
            return il2cpp::create_object<app::SandWormJumpAttackBehaviour_c_DisplayClass40_0>(get_class());
        }
    } // namespace SandWormJumpAttackBehaviour_c_DisplayClass40_0
} // namespace app::classes::types
