#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SystemThreadingTasks_TaskDebugView {
        namespace {
            inline app::SystemThreadingTasks_TaskDebugView__Class* type_info_ref = nullptr;
        }
        inline app::SystemThreadingTasks_TaskDebugView__Class** type_info = &type_info_ref;
        inline app::SystemThreadingTasks_TaskDebugView__Class* get_class() {
            return il2cpp::get_class<app::SystemThreadingTasks_TaskDebugView__Class>(type_info, "System.Threading.Tasks", "SystemThreadingTasks_TaskDebugView");
        }
        inline app::SystemThreadingTasks_TaskDebugView* create() {
            return il2cpp::create_object<app::SystemThreadingTasks_TaskDebugView>(get_class());
        }
    } // namespace SystemThreadingTasks_TaskDebugView
} // namespace app::classes::types
