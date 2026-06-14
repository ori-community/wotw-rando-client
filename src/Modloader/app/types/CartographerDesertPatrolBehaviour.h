#pragma once
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour.h>
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartographerDesertPatrolBehaviour {
        inline app::CartographerDesertPatrolBehaviour__Class** type_info() {
            static app::CartographerDesertPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartographerDesertPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartographerDesertPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CartographerDesertPatrolBehaviour__Class>(type_info(), "Moon", "CartographerDesertPatrolBehaviour");
        }
        inline app::CartographerDesertPatrolBehaviour* create() {
            return il2cpp::create_object<app::CartographerDesertPatrolBehaviour>(get_class());
        }
    } // namespace CartographerDesertPatrolBehaviour
} // namespace app::classes::types
