#pragma once
#include <Modloader/app/structs/ThreadPriority__Enum_1.h>
#include <Modloader/app/structs/ThreadPriority__Enum_1__Array.h>
#include <Modloader/app/structs/ThreadPriority__Enum_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadPriority__Enum_1 {
        inline app::ThreadPriority__Enum_1__Class** type_info() {
            static app::ThreadPriority__Enum_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadPriority__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x04748450));
            }
            return cache;
        }
        inline app::ThreadPriority__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::ThreadPriority__Enum_1__Class>(type_info(), "UnityEngine", "ThreadPriority");
        }
        inline app::ThreadPriority__Enum_1* create() {
            return il2cpp::create_object<app::ThreadPriority__Enum_1>(get_class());
        }
        inline app::ThreadPriority__Enum_1__Array* create_array(int size) {
            return il2cpp::array_new<app::ThreadPriority__Enum_1__Array>(get_class(), size);
        }
        inline app::ThreadPriority__Enum_1__Array* create_array(const std::vector<app::ThreadPriority__Enum_1*>& items) {
            return il2cpp::array_new<app::ThreadPriority__Enum_1__Array>(get_class(), items);
        }
    } // namespace ThreadPriority__Enum_1
} // namespace app::classes::types
