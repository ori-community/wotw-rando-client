#pragma once
#include <Modloader/app/structs/SwarmAttackBehaviour.h>
#include <Modloader/app/structs/SwarmAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmAttackBehaviour {
        inline app::SwarmAttackBehaviour__Class** type_info() {
            static app::SwarmAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SwarmAttackBehaviour__Class>(type_info(), "", "SwarmAttackBehaviour");
        }
        inline app::SwarmAttackBehaviour* create() {
            return il2cpp::create_object<app::SwarmAttackBehaviour>(get_class());
        }
    } // namespace SwarmAttackBehaviour
} // namespace app::classes::types
