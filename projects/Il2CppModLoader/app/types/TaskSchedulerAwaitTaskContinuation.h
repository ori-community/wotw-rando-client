#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskSchedulerAwaitTaskContinuation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TaskSchedulerAwaitTaskContinuation__Class** type_info;
        inline app::TaskSchedulerAwaitTaskContinuation__Class* get_class() {
            return il2cpp::get_class<app::TaskSchedulerAwaitTaskContinuation__Class>(type_info, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation");
        }
        inline app::TaskSchedulerAwaitTaskContinuation* create() {
            return il2cpp::create_object<app::TaskSchedulerAwaitTaskContinuation>(get_class());
        }
    } // namespace TaskSchedulerAwaitTaskContinuation
} // namespace app::classes::types
