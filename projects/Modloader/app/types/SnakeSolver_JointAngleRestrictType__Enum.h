#pragma once
#include <Modloader/app/structs/SnakeSolver_JointAngleRestrictType__Enum.h>
#include <Modloader/app/structs/SnakeSolver_JointAngleRestrictType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnakeSolver_JointAngleRestrictType__Enum {
        inline app::SnakeSolver_JointAngleRestrictType__Enum__Class** type_info() {
            static app::SnakeSolver_JointAngleRestrictType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnakeSolver_JointAngleRestrictType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnakeSolver_JointAngleRestrictType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SnakeSolver_JointAngleRestrictType__Enum__Class>(type_info(), "", "SnakeSolver", "JointAngleRestrictType");
        }
        inline app::SnakeSolver_JointAngleRestrictType__Enum* create() {
            return il2cpp::create_object<app::SnakeSolver_JointAngleRestrictType__Enum>(get_class());
        }
    } // namespace SnakeSolver_JointAngleRestrictType__Enum
} // namespace app::classes::types
