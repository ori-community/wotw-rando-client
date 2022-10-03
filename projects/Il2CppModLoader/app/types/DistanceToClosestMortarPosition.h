#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DistanceToClosestMortarPosition {
        namespace {
            app::DistanceToClosestMortarPosition__Class* type_info_ref = nullptr;
        }
        app::DistanceToClosestMortarPosition__Class** type_info = &type_info_ref;
        inline app::DistanceToClosestMortarPosition__Class* get_class() {
            return il2cpp::get_class<app::DistanceToClosestMortarPosition__Class>(type_info, "Moon.BehaviourSystem", "DistanceToClosestMortarPosition");
        }
        inline app::DistanceToClosestMortarPosition* create() {
            return il2cpp::create_object<app::DistanceToClosestMortarPosition>(get_class());
        }
    } // namespace DistanceToClosestMortarPosition
} // namespace app::classes::types
