#pragma once
#include <Modloader/app/structs/SnakeSolver_BaseFixType__Enum.h>
#include <Modloader/app/structs/SnakeSolver_BaseFixType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnakeSolver_BaseFixType__Enum {
        inline app::SnakeSolver_BaseFixType__Enum__Class** type_info() {
            static app::SnakeSolver_BaseFixType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnakeSolver_BaseFixType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnakeSolver_BaseFixType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SnakeSolver_BaseFixType__Enum__Class>(type_info(), "", "SnakeSolver", "BaseFixType");
        }
        inline app::SnakeSolver_BaseFixType__Enum* create() {
            return il2cpp::create_object<app::SnakeSolver_BaseFixType__Enum>(get_class());
        }
    } // namespace SnakeSolver_BaseFixType__Enum
} // namespace app::classes::types
