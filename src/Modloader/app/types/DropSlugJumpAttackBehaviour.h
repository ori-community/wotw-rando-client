#pragma once
#include <Modloader/app/structs/DropSlugJumpAttackBehaviour.h>
#include <Modloader/app/structs/DropSlugJumpAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugJumpAttackBehaviour {
        inline app::DropSlugJumpAttackBehaviour__Class** type_info() {
            static app::DropSlugJumpAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugJumpAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugJumpAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DropSlugJumpAttackBehaviour__Class>(type_info(), "", "DropSlugJumpAttackBehaviour");
        }
        inline app::DropSlugJumpAttackBehaviour* create() {
            return il2cpp::create_object<app::DropSlugJumpAttackBehaviour>(get_class());
        }
    } // namespace DropSlugJumpAttackBehaviour
} // namespace app::classes::types
