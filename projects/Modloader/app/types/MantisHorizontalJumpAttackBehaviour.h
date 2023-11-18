#pragma once
#include <Modloader/app/structs/MantisHorizontalJumpAttackBehaviour.h>
#include <Modloader/app/structs/MantisHorizontalJumpAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisHorizontalJumpAttackBehaviour {
        inline app::MantisHorizontalJumpAttackBehaviour__Class** type_info() {
            static app::MantisHorizontalJumpAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisHorizontalJumpAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisHorizontalJumpAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisHorizontalJumpAttackBehaviour__Class>(type_info(), "", "MantisHorizontalJumpAttackBehaviour");
        }
        inline app::MantisHorizontalJumpAttackBehaviour* create() {
            return il2cpp::create_object<app::MantisHorizontalJumpAttackBehaviour>(get_class());
        }
    } // namespace MantisHorizontalJumpAttackBehaviour
} // namespace app::classes::types
