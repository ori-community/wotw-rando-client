#pragma once
#include <Modloader/app/structs/SnakeSolver.h>
#include <Modloader/app/structs/SnakeSolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnakeSolver {
        inline app::SnakeSolver__Class** type_info() {
            static app::SnakeSolver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnakeSolver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnakeSolver__Class* get_class() {
            return il2cpp::get_class<app::SnakeSolver__Class>(type_info(), "", "SnakeSolver");
        }
        inline app::SnakeSolver* create() {
            return il2cpp::create_object<app::SnakeSolver>(get_class());
        }
    } // namespace SnakeSolver
} // namespace app::classes::types
