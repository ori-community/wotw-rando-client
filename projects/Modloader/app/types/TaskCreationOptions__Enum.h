#pragma once
#include <Modloader/app/structs/TaskCreationOptions__Enum.h>
#include <Modloader/app/structs/TaskCreationOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskCreationOptions__Enum {
        inline app::TaskCreationOptions__Enum__Class** type_info() {
            static app::TaskCreationOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TaskCreationOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TaskCreationOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::TaskCreationOptions__Enum__Class>(type_info(), "System.Threading.Tasks", "TaskCreationOptions");
        }
        inline app::TaskCreationOptions__Enum* create() {
            return il2cpp::create_object<app::TaskCreationOptions__Enum>(get_class());
        }
    } // namespace TaskCreationOptions__Enum
} // namespace app::classes::types
