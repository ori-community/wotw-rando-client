#pragma once
#include <Modloader/app/structs/CrabLungeAttackBehaviour.h>
#include <Modloader/app/structs/CrabLungeAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabLungeAttackBehaviour {
        inline app::CrabLungeAttackBehaviour__Class** type_info() {
            static app::CrabLungeAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabLungeAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabLungeAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabLungeAttackBehaviour__Class>(type_info(), "Moon", "CrabLungeAttackBehaviour");
        }
        inline app::CrabLungeAttackBehaviour* create() {
            return il2cpp::create_object<app::CrabLungeAttackBehaviour>(get_class());
        }
    } // namespace CrabLungeAttackBehaviour
} // namespace app::classes::types
