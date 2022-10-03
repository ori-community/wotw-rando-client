#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadPriority__Enum_1__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ThreadPriority__Enum_1__Array__Class** type_info;
        inline app::ThreadPriority__Enum_1__Array__Class* get_class() {
            return il2cpp::get_class<app::ThreadPriority__Enum_1__Array__Class>(type_info, "UnityEngine", "ThreadPriority[]");
        }
        inline app::ThreadPriority__Enum_1__Array* create() {
            return il2cpp::create_object<app::ThreadPriority__Enum_1__Array>(get_class());
        }
    } // namespace ThreadPriority__Enum_1__Array
} // namespace app::classes::types
