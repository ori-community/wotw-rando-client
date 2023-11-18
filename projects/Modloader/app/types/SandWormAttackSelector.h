#pragma once
#include <Modloader/app/structs/SandWormAttackSelector.h>
#include <Modloader/app/structs/SandWormAttackSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormAttackSelector {
        inline app::SandWormAttackSelector__Class** type_info() {
            static app::SandWormAttackSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormAttackSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormAttackSelector__Class* get_class() {
            return il2cpp::get_class<app::SandWormAttackSelector__Class>(type_info(), "", "SandWormAttackSelector");
        }
        inline app::SandWormAttackSelector* create() {
            return il2cpp::create_object<app::SandWormAttackSelector>(get_class());
        }
    } // namespace SandWormAttackSelector
} // namespace app::classes::types
