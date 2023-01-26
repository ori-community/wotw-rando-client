#pragma once
#include <Modloader/app/structs/TaskSchedulerAwaitTaskContinuation_c.h>
#include <Modloader/app/structs/TaskSchedulerAwaitTaskContinuation_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskSchedulerAwaitTaskContinuation_c {
        inline app::TaskSchedulerAwaitTaskContinuation_c__Class** type_info() {
            static app::TaskSchedulerAwaitTaskContinuation_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TaskSchedulerAwaitTaskContinuation_c__Class**)(modloader::win::memory::resolve_rva(0x04730718));
            }
            return cache;
        }
        inline app::TaskSchedulerAwaitTaskContinuation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TaskSchedulerAwaitTaskContinuation_c__Class>(type_info(), "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation", "<>c");
        }
        inline app::TaskSchedulerAwaitTaskContinuation_c* create() {
            return il2cpp::create_object<app::TaskSchedulerAwaitTaskContinuation_c>(get_class());
        }
    } // namespace TaskSchedulerAwaitTaskContinuation_c
} // namespace app::classes::types
