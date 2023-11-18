#pragma once
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour_IdleStop.h>
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour_IdleStop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartographerDesertPatrolBehaviour_IdleStop {
        inline app::CartographerDesertPatrolBehaviour_IdleStop__Class** type_info() {
            static app::CartographerDesertPatrolBehaviour_IdleStop__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartographerDesertPatrolBehaviour_IdleStop__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartographerDesertPatrolBehaviour_IdleStop__Class* get_class() {
            return il2cpp::get_nested_class<app::CartographerDesertPatrolBehaviour_IdleStop__Class>(type_info(), "Moon", "CartographerDesertPatrolBehaviour", "IdleStop");
        }
        inline app::CartographerDesertPatrolBehaviour_IdleStop* create() {
            return il2cpp::create_object<app::CartographerDesertPatrolBehaviour_IdleStop>(get_class());
        }
    } // namespace CartographerDesertPatrolBehaviour_IdleStop
} // namespace app::classes::types
