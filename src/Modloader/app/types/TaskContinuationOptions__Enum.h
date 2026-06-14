#pragma once
#include <Modloader/app/structs/TaskContinuationOptions__Enum.h>
#include <Modloader/app/structs/TaskContinuationOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskContinuationOptions__Enum {
        inline app::TaskContinuationOptions__Enum__Class** type_info() {
            static app::TaskContinuationOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TaskContinuationOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TaskContinuationOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::TaskContinuationOptions__Enum__Class>(type_info(), "System.Threading.Tasks", "TaskContinuationOptions");
        }
        inline app::TaskContinuationOptions__Enum* create() {
            return il2cpp::create_object<app::TaskContinuationOptions__Enum>(get_class());
        }
    } // namespace TaskContinuationOptions__Enum
} // namespace app::classes::types
