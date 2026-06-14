#pragma once
#include <Modloader/app/structs/TaskSchedulerAwaitTaskContinuation.h>
#include <Modloader/app/structs/TaskSchedulerAwaitTaskContinuation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskSchedulerAwaitTaskContinuation {
        inline app::TaskSchedulerAwaitTaskContinuation__Class** type_info() {
            static app::TaskSchedulerAwaitTaskContinuation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TaskSchedulerAwaitTaskContinuation__Class**)(modloader::win::memory::resolve_rva(0x0471C708));
            }
            return cache;
        }
        inline app::TaskSchedulerAwaitTaskContinuation__Class* get_class() {
            return il2cpp::get_class<app::TaskSchedulerAwaitTaskContinuation__Class>(type_info(), "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation");
        }
        inline app::TaskSchedulerAwaitTaskContinuation* create() {
            return il2cpp::create_object<app::TaskSchedulerAwaitTaskContinuation>(get_class());
        }
    } // namespace TaskSchedulerAwaitTaskContinuation
} // namespace app::classes::types
