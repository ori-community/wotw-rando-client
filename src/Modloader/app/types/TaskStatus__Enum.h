#pragma once
#include <Modloader/app/structs/TaskStatus__Enum.h>
#include <Modloader/app/structs/TaskStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskStatus__Enum {
        inline app::TaskStatus__Enum__Class** type_info() {
            static app::TaskStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TaskStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TaskStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TaskStatus__Enum__Class>(type_info(), "System.Threading.Tasks", "TaskStatus");
        }
        inline app::TaskStatus__Enum* create() {
            return il2cpp::create_object<app::TaskStatus__Enum>(get_class());
        }
    } // namespace TaskStatus__Enum
} // namespace app::classes::types
