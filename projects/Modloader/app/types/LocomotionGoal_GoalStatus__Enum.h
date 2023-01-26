#pragma once
#include <Modloader/app/structs/LocomotionGoal_GoalStatus__Enum.h>
#include <Modloader/app/structs/LocomotionGoal_GoalStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionGoal_GoalStatus__Enum {
        inline app::LocomotionGoal_GoalStatus__Enum__Class** type_info() {
            static app::LocomotionGoal_GoalStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionGoal_GoalStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionGoal_GoalStatus__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LocomotionGoal_GoalStatus__Enum__Class>(type_info(), "Moon", "LocomotionGoal", "GoalStatus");
        }
        inline app::LocomotionGoal_GoalStatus__Enum* create() {
            return il2cpp::create_object<app::LocomotionGoal_GoalStatus__Enum>(get_class());
        }
    } // namespace LocomotionGoal_GoalStatus__Enum
} // namespace app::classes::types
