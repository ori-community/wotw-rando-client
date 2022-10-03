#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerThread_TimerNode_TimerState__Enum {
        namespace {
            app::TimerThread_TimerNode_TimerState__Enum__Class* type_info_ref = nullptr;
        }
        app::TimerThread_TimerNode_TimerState__Enum__Class** type_info = &type_info_ref;
        inline app::TimerThread_TimerNode_TimerState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_TimerNode_TimerState__Enum__Class>(type_info, "System.Net", "TimerThread+TimerNode", "TimerState");
        }
        inline app::TimerThread_TimerNode_TimerState__Enum* create() {
            return il2cpp::create_object<app::TimerThread_TimerNode_TimerState__Enum>(get_class());
        }
    } // namespace TimerThread_TimerNode_TimerState__Enum
} // namespace app::classes::types
