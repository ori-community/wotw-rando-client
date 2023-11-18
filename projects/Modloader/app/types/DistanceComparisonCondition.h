#pragma once
#include <Modloader/app/structs/DistanceComparisonCondition.h>
#include <Modloader/app/structs/DistanceComparisonCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DistanceComparisonCondition {
        inline app::DistanceComparisonCondition__Class** type_info() {
            static app::DistanceComparisonCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DistanceComparisonCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DistanceComparisonCondition__Class* get_class() {
            return il2cpp::get_class<app::DistanceComparisonCondition__Class>(type_info(), "Moon.BehaviourSystem", "DistanceComparisonCondition");
        }
        inline app::DistanceComparisonCondition* create() {
            return il2cpp::create_object<app::DistanceComparisonCondition>(get_class());
        }
    } // namespace DistanceComparisonCondition
} // namespace app::classes::types
