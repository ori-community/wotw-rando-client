#pragma once
#include <Modloader/app/structs/TimerThread_TimerNode_TimerState__Enum.h>
#include <Modloader/app/structs/TimerThread_TimerNode_TimerState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerThread_TimerNode_TimerState__Enum {
        inline app::TimerThread_TimerNode_TimerState__Enum__Class** type_info() {
            static app::TimerThread_TimerNode_TimerState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimerThread_TimerNode_TimerState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimerThread_TimerNode_TimerState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_TimerNode_TimerState__Enum__Class>(type_info(), "System.Net", "TimerThread+TimerNode", "TimerState");
        }
        inline app::TimerThread_TimerNode_TimerState__Enum* create() {
            return il2cpp::create_object<app::TimerThread_TimerNode_TimerState__Enum>(get_class());
        }
    } // namespace TimerThread_TimerNode_TimerState__Enum
} // namespace app::classes::types
