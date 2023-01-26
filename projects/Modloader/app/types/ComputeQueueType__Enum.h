#pragma once
#include <Modloader/app/structs/ComputeQueueType__Enum.h>
#include <Modloader/app/structs/ComputeQueueType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComputeQueueType__Enum {
        inline app::ComputeQueueType__Enum__Class** type_info() {
            static app::ComputeQueueType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComputeQueueType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComputeQueueType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ComputeQueueType__Enum__Class>(type_info(), "UnityEngine.Rendering", "ComputeQueueType");
        }
        inline app::ComputeQueueType__Enum* create() {
            return il2cpp::create_object<app::ComputeQueueType__Enum>(get_class());
        }
    } // namespace ComputeQueueType__Enum
} // namespace app::classes::types
