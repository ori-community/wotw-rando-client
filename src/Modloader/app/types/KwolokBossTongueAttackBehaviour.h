#pragma once
#include <Modloader/app/structs/KwolokBossTongueAttackBehaviour.h>
#include <Modloader/app/structs/KwolokBossTongueAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTongueAttackBehaviour {
        inline app::KwolokBossTongueAttackBehaviour__Class** type_info() {
            static app::KwolokBossTongueAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossTongueAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossTongueAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTongueAttackBehaviour__Class>(type_info(), "", "KwolokBossTongueAttackBehaviour");
        }
        inline app::KwolokBossTongueAttackBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossTongueAttackBehaviour>(get_class());
        }
    } // namespace KwolokBossTongueAttackBehaviour
} // namespace app::classes::types
