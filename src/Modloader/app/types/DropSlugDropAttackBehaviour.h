#pragma once
#include <Modloader/app/structs/DropSlugDropAttackBehaviour.h>
#include <Modloader/app/structs/DropSlugDropAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugDropAttackBehaviour {
        inline app::DropSlugDropAttackBehaviour__Class** type_info() {
            static app::DropSlugDropAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugDropAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugDropAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DropSlugDropAttackBehaviour__Class>(type_info(), "", "DropSlugDropAttackBehaviour");
        }
        inline app::DropSlugDropAttackBehaviour* create() {
            return il2cpp::create_object<app::DropSlugDropAttackBehaviour>(get_class());
        }
    } // namespace DropSlugDropAttackBehaviour
} // namespace app::classes::types
