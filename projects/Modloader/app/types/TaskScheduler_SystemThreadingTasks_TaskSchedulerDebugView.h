#pragma once
#include <Modloader/app/structs/TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView.h>
#include <Modloader/app/structs/TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView {
        inline app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Class** type_info() {
            static app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView__Class>(type_info(), "System.Threading.Tasks", "TaskScheduler", "SystemThreadingTasks_TaskSchedulerDebugView");
        }
        inline app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView* create() {
            return il2cpp::create_object<app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView>(get_class());
        }
    } // namespace TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView
} // namespace app::classes::types
