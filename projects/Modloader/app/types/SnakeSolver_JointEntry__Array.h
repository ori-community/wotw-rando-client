#pragma once
#include <Modloader/app/structs/SnakeSolver_JointEntry__Array.h>
#include <Modloader/app/structs/SnakeSolver_JointEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnakeSolver_JointEntry__Array {
        inline app::SnakeSolver_JointEntry__Array__Class** type_info() {
            static app::SnakeSolver_JointEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnakeSolver_JointEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnakeSolver_JointEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::SnakeSolver_JointEntry__Array__Class>(type_info(), "", "SnakeSolver+JointEntry[]");
        }
        inline app::SnakeSolver_JointEntry__Array* create() {
            return il2cpp::create_object<app::SnakeSolver_JointEntry__Array>(get_class());
        }
    } // namespace SnakeSolver_JointEntry__Array
} // namespace app::classes::types
