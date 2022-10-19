#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView {
        namespace {
            inline app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Class* type_info_ref = nullptr;
        }
        inline app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Class** type_info = &type_info_ref;
        inline app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Class>(type_info, "System.Threading.Tasks", "TaskScheduler", "SystemThreadingTasks_TaskSchedulerDebugView");
        }
        inline app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView* create() {
            return il2cpp::create_object<app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView>(get_class());
        }
    } // namespace TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView
} // namespace app::classes::types
