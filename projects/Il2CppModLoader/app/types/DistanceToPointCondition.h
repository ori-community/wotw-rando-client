#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DistanceToPointCondition {
        namespace {
            app::DistanceToPointCondition__Class* type_info_ref = nullptr;
        }
        app::DistanceToPointCondition__Class** type_info = &type_info_ref;
        inline app::DistanceToPointCondition__Class* get_class() {
            return il2cpp::get_class<app::DistanceToPointCondition__Class>(type_info, "Moon.BehaviourSystem", "DistanceToPointCondition");
        }
        inline app::DistanceToPointCondition* create() {
            return il2cpp::create_object<app::DistanceToPointCondition>(get_class());
        }
    } // namespace DistanceToPointCondition
} // namespace app::classes::types
