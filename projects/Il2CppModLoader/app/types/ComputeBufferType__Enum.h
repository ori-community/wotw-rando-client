#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComputeBufferType__Enum {
        namespace {
            app::ComputeBufferType__Enum__Class* type_info_ref = nullptr;
        }
        app::ComputeBufferType__Enum__Class** type_info = &type_info_ref;
        inline app::ComputeBufferType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ComputeBufferType__Enum__Class>(type_info, "UnityEngine", "ComputeBufferType");
        }
        inline app::ComputeBufferType__Enum* create() {
            return il2cpp::create_object<app::ComputeBufferType__Enum>(get_class());
        }
    } // namespace ComputeBufferType__Enum
} // namespace app::classes::types
