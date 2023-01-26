#pragma once
#include <Modloader/app/structs/ComputeBufferType__Enum.h>
#include <Modloader/app/structs/ComputeBufferType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComputeBufferType__Enum {
        inline app::ComputeBufferType__Enum__Class** type_info() {
            static app::ComputeBufferType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComputeBufferType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComputeBufferType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ComputeBufferType__Enum__Class>(type_info(), "UnityEngine", "ComputeBufferType");
        }
        inline app::ComputeBufferType__Enum* create() {
            return il2cpp::create_object<app::ComputeBufferType__Enum>(get_class());
        }
    } // namespace ComputeBufferType__Enum
} // namespace app::classes::types
