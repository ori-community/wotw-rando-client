#pragma once
#include <Modloader/app/structs/SceneLoadingQueuePriorityMode__Enum.h>
#include <Modloader/app/structs/SceneLoadingQueuePriorityMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingQueuePriorityMode__Enum {
        inline app::SceneLoadingQueuePriorityMode__Enum__Class** type_info() {
            static app::SceneLoadingQueuePriorityMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneLoadingQueuePriorityMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneLoadingQueuePriorityMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingQueuePriorityMode__Enum__Class>(type_info(), "", "SceneLoadingQueuePriorityMode");
        }
        inline app::SceneLoadingQueuePriorityMode__Enum* create() {
            return il2cpp::create_object<app::SceneLoadingQueuePriorityMode__Enum>(get_class());
        }
    } // namespace SceneLoadingQueuePriorityMode__Enum
} // namespace app::classes::types
