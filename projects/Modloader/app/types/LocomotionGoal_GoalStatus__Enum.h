#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocomotionGoal_GoalStatus__Enum {
        namespace {
            inline app::LocomotionGoal_GoalStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LocomotionGoal_GoalStatus__Enum__Class** type_info = &type_info_ref;
        inline app::LocomotionGoal_GoalStatus__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LocomotionGoal_GoalStatus__Enum__Class>(type_info, "Moon", "LocomotionGoal", "GoalStatus");
        }
        inline app::LocomotionGoal_GoalStatus__Enum* create() {
            return il2cpp::create_object<app::LocomotionGoal_GoalStatus__Enum>(get_class());
        }
    } // namespace LocomotionGoal_GoalStatus__Enum
} // namespace app::classes::types
