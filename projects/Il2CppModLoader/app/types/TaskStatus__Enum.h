#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskStatus__Enum {
        namespace {
            app::TaskStatus__Enum__Class* type_info_ref = nullptr;
        }
        app::TaskStatus__Enum__Class** type_info = &type_info_ref;
        inline app::TaskStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TaskStatus__Enum__Class>(type_info, "System.Threading.Tasks", "TaskStatus");
        }
        inline app::TaskStatus__Enum* create() {
            return il2cpp::create_object<app::TaskStatus__Enum>(get_class());
        }
    } // namespace TaskStatus__Enum
} // namespace app::classes::types
