#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TaskInstanceStatus__Enum__Class.h>
#include <Modloader/app/structs/TaskInstanceStatus__Enum.h>

namespace app::classes::types {
    namespace TaskInstanceStatus__Enum {
        namespace {
            inline app::TaskInstanceStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TaskInstanceStatus__Enum__Class** type_info = &type_info_ref;
        inline app::TaskInstanceStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TaskInstanceStatus__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "TaskInstanceStatus");
        }
        inline app::TaskInstanceStatus__Enum* create() {
            return il2cpp::create_object<app::TaskInstanceStatus__Enum>(get_class());
        }
    } // namespace TaskInstanceStatus__Enum
} // namespace app::classes::types
