#pragma once
#include <Modloader/app/structs/DistanceToClosestMortarPosition.h>
#include <Modloader/app/structs/DistanceToClosestMortarPosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DistanceToClosestMortarPosition {
        inline app::DistanceToClosestMortarPosition__Class** type_info() {
            static app::DistanceToClosestMortarPosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DistanceToClosestMortarPosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DistanceToClosestMortarPosition__Class* get_class() {
            return il2cpp::get_class<app::DistanceToClosestMortarPosition__Class>(type_info(), "Moon.BehaviourSystem", "DistanceToClosestMortarPosition");
        }
        inline app::DistanceToClosestMortarPosition* create() {
            return il2cpp::create_object<app::DistanceToClosestMortarPosition>(get_class());
        }
    } // namespace DistanceToClosestMortarPosition
} // namespace app::classes::types
