#pragma once
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum.h>
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum {
        inline app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Class** type_info() {
            static app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Class>(type_info(), "Moon", "CartographerDesertPatrolBehaviour+IdleStop", "StopType");
        }
        inline app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum* create() {
            return il2cpp::create_object<app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum>(get_class());
        }
    } // namespace CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum
} // namespace app::classes::types
