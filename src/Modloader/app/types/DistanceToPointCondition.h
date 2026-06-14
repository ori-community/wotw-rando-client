#pragma once
#include <Modloader/app/structs/DistanceToPointCondition.h>
#include <Modloader/app/structs/DistanceToPointCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DistanceToPointCondition {
        inline app::DistanceToPointCondition__Class** type_info() {
            static app::DistanceToPointCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DistanceToPointCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DistanceToPointCondition__Class* get_class() {
            return il2cpp::get_class<app::DistanceToPointCondition__Class>(type_info(), "Moon.BehaviourSystem", "DistanceToPointCondition");
        }
        inline app::DistanceToPointCondition* create() {
            return il2cpp::create_object<app::DistanceToPointCondition>(get_class());
        }
    } // namespace DistanceToPointCondition
} // namespace app::classes::types
