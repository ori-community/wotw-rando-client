#pragma once
#include <Modloader/app/structs/SystemThreadingTasks_TaskDebugView.h>
#include <Modloader/app/structs/SystemThreadingTasks_TaskDebugView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SystemThreadingTasks_TaskDebugView {
        inline app::SystemThreadingTasks_TaskDebugView__Class** type_info() {
            static app::SystemThreadingTasks_TaskDebugView__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SystemThreadingTasks_TaskDebugView__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SystemThreadingTasks_TaskDebugView__Class* get_class() {
            return il2cpp::get_class<app::SystemThreadingTasks_TaskDebugView__Class>(type_info(), "System.Threading.Tasks", "SystemThreadingTasks_TaskDebugView");
        }
        inline app::SystemThreadingTasks_TaskDebugView* create() {
            return il2cpp::create_object<app::SystemThreadingTasks_TaskDebugView>(get_class());
        }
    } // namespace SystemThreadingTasks_TaskDebugView
} // namespace app::classes::types
