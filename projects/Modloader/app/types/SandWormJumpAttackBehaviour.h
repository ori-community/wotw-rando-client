#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormJumpAttackBehaviour__Class.h>
#include <Modloader/app/structs/SandWormJumpAttackBehaviour.h>

namespace app::classes::types {
    namespace SandWormJumpAttackBehaviour {
        namespace {
            inline app::SandWormJumpAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SandWormJumpAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormJumpAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormJumpAttackBehaviour__Class>(type_info, "", "SandWormJumpAttackBehaviour");
        }
        inline app::SandWormJumpAttackBehaviour* create() {
            return il2cpp::create_object<app::SandWormJumpAttackBehaviour>(get_class());
        }
    } // namespace SandWormJumpAttackBehaviour
} // namespace app::classes::types
