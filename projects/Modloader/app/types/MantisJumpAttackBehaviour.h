#pragma once
#include <Modloader/app/structs/MantisJumpAttackBehaviour.h>
#include <Modloader/app/structs/MantisJumpAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisJumpAttackBehaviour {
        inline app::MantisJumpAttackBehaviour__Class** type_info() {
            static app::MantisJumpAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisJumpAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisJumpAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisJumpAttackBehaviour__Class>(type_info(), "", "MantisJumpAttackBehaviour");
        }
        inline app::MantisJumpAttackBehaviour* create() {
            return il2cpp::create_object<app::MantisJumpAttackBehaviour>(get_class());
        }
    } // namespace MantisJumpAttackBehaviour
} // namespace app::classes::types
