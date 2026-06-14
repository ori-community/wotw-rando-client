#pragma once
#include <Modloader/app/structs/SandWormJumpAttackBehaviour.h>
#include <Modloader/app/structs/SandWormJumpAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormJumpAttackBehaviour {
        inline app::SandWormJumpAttackBehaviour__Class** type_info() {
            static app::SandWormJumpAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormJumpAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormJumpAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormJumpAttackBehaviour__Class>(type_info(), "", "SandWormJumpAttackBehaviour");
        }
        inline app::SandWormJumpAttackBehaviour* create() {
            return il2cpp::create_object<app::SandWormJumpAttackBehaviour>(get_class());
        }
    } // namespace SandWormJumpAttackBehaviour
} // namespace app::classes::types
