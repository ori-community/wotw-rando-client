#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TaskState__Enum {
        namespace {
            inline app::TaskState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TaskState__Enum__Class** type_info = &type_info_ref;
        inline app::TaskState__Enum__Class* get_class() {
            return il2cpp::get_class<app::TaskState__Enum__Class>(type_info, "Moon.ArtOptimization", "TaskState");
        }
        inline app::TaskState__Enum* create() {
            return il2cpp::create_object<app::TaskState__Enum>(get_class());
        }
    } // namespace TaskState__Enum
} // namespace app::classes::types
