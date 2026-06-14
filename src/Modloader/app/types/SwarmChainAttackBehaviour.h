#pragma once
#include <Modloader/app/structs/SwarmChainAttackBehaviour.h>
#include <Modloader/app/structs/SwarmChainAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmChainAttackBehaviour {
        inline app::SwarmChainAttackBehaviour__Class** type_info() {
            static app::SwarmChainAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmChainAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmChainAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SwarmChainAttackBehaviour__Class>(type_info(), "", "SwarmChainAttackBehaviour");
        }
        inline app::SwarmChainAttackBehaviour* create() {
            return il2cpp::create_object<app::SwarmChainAttackBehaviour>(get_class());
        }
    } // namespace SwarmChainAttackBehaviour
} // namespace app::classes::types
