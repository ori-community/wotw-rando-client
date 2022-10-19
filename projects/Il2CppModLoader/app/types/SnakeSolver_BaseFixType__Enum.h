#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SnakeSolver_BaseFixType__Enum {
        namespace {
            inline app::SnakeSolver_BaseFixType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SnakeSolver_BaseFixType__Enum__Class** type_info = &type_info_ref;
        inline app::SnakeSolver_BaseFixType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SnakeSolver_BaseFixType__Enum__Class>(type_info, "", "SnakeSolver", "BaseFixType");
        }
        inline app::SnakeSolver_BaseFixType__Enum* create() {
            return il2cpp::create_object<app::SnakeSolver_BaseFixType__Enum>(get_class());
        }
    } // namespace SnakeSolver_BaseFixType__Enum
} // namespace app::classes::types
