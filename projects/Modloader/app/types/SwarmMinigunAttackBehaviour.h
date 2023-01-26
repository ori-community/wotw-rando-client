#pragma once
#include <Modloader/app/structs/SwarmMinigunAttackBehaviour.h>
#include <Modloader/app/structs/SwarmMinigunAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmMinigunAttackBehaviour {
        inline app::SwarmMinigunAttackBehaviour__Class** type_info() {
            static app::SwarmMinigunAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmMinigunAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmMinigunAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SwarmMinigunAttackBehaviour__Class>(type_info(), "", "SwarmMinigunAttackBehaviour");
        }
        inline app::SwarmMinigunAttackBehaviour* create() {
            return il2cpp::create_object<app::SwarmMinigunAttackBehaviour>(get_class());
        }
    } // namespace SwarmMinigunAttackBehaviour
} // namespace app::classes::types
