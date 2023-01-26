#pragma once
#include <Modloader/app/structs/TaskState__Enum.h>
#include <Modloader/app/structs/TaskState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskState__Enum {
        inline app::TaskState__Enum__Class** type_info() {
            static app::TaskState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TaskState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TaskState__Enum__Class* get_class() {
            return il2cpp::get_class<app::TaskState__Enum__Class>(type_info(), "Moon.ArtOptimization", "TaskState");
        }
        inline app::TaskState__Enum* create() {
            return il2cpp::create_object<app::TaskState__Enum>(get_class());
        }
    } // namespace TaskState__Enum
} // namespace app::classes::types
