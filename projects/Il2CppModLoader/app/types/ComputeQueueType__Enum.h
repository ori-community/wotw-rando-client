#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComputeQueueType__Enum {
        namespace {
            inline app::ComputeQueueType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ComputeQueueType__Enum__Class** type_info = &type_info_ref;
        inline app::ComputeQueueType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ComputeQueueType__Enum__Class>(type_info, "UnityEngine.Rendering", "ComputeQueueType");
        }
        inline app::ComputeQueueType__Enum* create() {
            return il2cpp::create_object<app::ComputeQueueType__Enum>(get_class());
        }
    } // namespace ComputeQueueType__Enum
} // namespace app::classes::types
