#pragma once
#include <Modloader/app/structs/SnakeSolver_JointEntry.h>
#include <Modloader/app/structs/SnakeSolver_JointEntry__Array.h>
#include <Modloader/app/structs/SnakeSolver_JointEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnakeSolver_JointEntry {
        inline app::SnakeSolver_JointEntry__Class** type_info() {
            static app::SnakeSolver_JointEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnakeSolver_JointEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnakeSolver_JointEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::SnakeSolver_JointEntry__Class>(type_info(), "", "SnakeSolver", "JointEntry");
        }
        inline app::SnakeSolver_JointEntry* create() {
            return il2cpp::create_object<app::SnakeSolver_JointEntry>(get_class());
        }
        inline app::SnakeSolver_JointEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::SnakeSolver_JointEntry__Array>(get_class(), size);
        }
        inline app::SnakeSolver_JointEntry__Array* create_array(const std::vector<app::SnakeSolver_JointEntry*>& items) {
            return il2cpp::array_new<app::SnakeSolver_JointEntry__Array>(get_class(), items);
        }
    } // namespace SnakeSolver_JointEntry
} // namespace app::classes::types
