#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TaskStatus__Enum__Class.h>
#include <Modloader/app/structs/TaskStatus__Enum.h>

namespace app::classes::types {
    namespace TaskStatus__Enum {
        namespace {
            inline app::TaskStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TaskStatus__Enum__Class** type_info = &type_info_ref;
        inline app::TaskStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TaskStatus__Enum__Class>(type_info, "System.Threading.Tasks", "TaskStatus");
        }
        inline app::TaskStatus__Enum* create() {
            return il2cpp::create_object<app::TaskStatus__Enum>(get_class());
        }
    } // namespace TaskStatus__Enum
} // namespace app::classes::types
