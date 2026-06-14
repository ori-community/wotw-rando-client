#pragma once
#include <Modloader/app/structs/ThreadPriority__Enum_1__Array.h>
#include <Modloader/app/structs/ThreadPriority__Enum_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadPriority__Enum_1__Array {
        inline app::ThreadPriority__Enum_1__Array__Class** type_info() {
            static app::ThreadPriority__Enum_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadPriority__Enum_1__Array__Class**)(modloader::win::memory::resolve_rva(0x0472BE10));
            }
            return cache;
        }
        inline app::ThreadPriority__Enum_1__Array__Class* get_class() {
            return il2cpp::get_class<app::ThreadPriority__Enum_1__Array__Class>(type_info(), "UnityEngine", "ThreadPriority[]");
        }
        inline app::ThreadPriority__Enum_1__Array* create() {
            return il2cpp::create_object<app::ThreadPriority__Enum_1__Array>(get_class());
        }
    } // namespace ThreadPriority__Enum_1__Array
} // namespace app::classes::types
