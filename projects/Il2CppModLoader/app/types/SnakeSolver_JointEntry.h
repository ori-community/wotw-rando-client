#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SnakeSolver_JointEntry {
        namespace {
            app::SnakeSolver_JointEntry__Class* type_info_ref = nullptr;
        }
        app::SnakeSolver_JointEntry__Class** type_info = &type_info_ref;
        inline app::SnakeSolver_JointEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::SnakeSolver_JointEntry__Class>(type_info, "", "SnakeSolver", "JointEntry");
        }
        inline app::SnakeSolver_JointEntry* create() {
            return il2cpp::create_object<app::SnakeSolver_JointEntry>(get_class());
        }
        inline app::SnakeSolver_JointEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::SnakeSolver_JointEntry__Array>(get_class(), size);
        }
    } // namespace SnakeSolver_JointEntry
} // namespace app::classes::types
