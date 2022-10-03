#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DistanceComparisonCondition {
        namespace {
            app::DistanceComparisonCondition__Class* type_info_ref = nullptr;
        }
        app::DistanceComparisonCondition__Class** type_info = &type_info_ref;
        inline app::DistanceComparisonCondition__Class* get_class() {
            return il2cpp::get_class<app::DistanceComparisonCondition__Class>(type_info, "Moon.BehaviourSystem", "DistanceComparisonCondition");
        }
        inline app::DistanceComparisonCondition* create() {
            return il2cpp::create_object<app::DistanceComparisonCondition>(get_class());
        }
    } // namespace DistanceComparisonCondition
} // namespace app::classes::types
