#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormJumpAttackBehaviour_State__Enum__Class.h>
#include <Modloader/app/structs/SandWormJumpAttackBehaviour_State__Enum.h>

namespace app::classes::types {
    namespace SandWormJumpAttackBehaviour_State__Enum {
        namespace {
            inline app::SandWormJumpAttackBehaviour_State__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SandWormJumpAttackBehaviour_State__Enum__Class** type_info = &type_info_ref;
        inline app::SandWormJumpAttackBehaviour_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormJumpAttackBehaviour_State__Enum__Class>(type_info, "", "SandWormJumpAttackBehaviour", "State");
        }
        inline app::SandWormJumpAttackBehaviour_State__Enum* create() {
            return il2cpp::create_object<app::SandWormJumpAttackBehaviour_State__Enum>(get_class());
        }
    } // namespace SandWormJumpAttackBehaviour_State__Enum
} // namespace app::classes::types
