#pragma once
#include <Modloader/app/structs/ThreadPriority__Enum.h>
#include <Modloader/app/structs/ThreadPriority__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadPriority__Enum {
        inline app::ThreadPriority__Enum__Class** type_info() {
            static app::ThreadPriority__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ThreadPriority__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ThreadPriority__Enum__Class* get_class() {
            return il2cpp::get_class<app::ThreadPriority__Enum__Class>(type_info(), "System.Threading", "ThreadPriority");
        }
        inline app::ThreadPriority__Enum* create() {
            return il2cpp::create_object<app::ThreadPriority__Enum>(get_class());
        }
    } // namespace ThreadPriority__Enum
} // namespace app::classes::types
