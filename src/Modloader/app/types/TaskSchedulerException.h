#pragma once
#include <Modloader/app/structs/TaskSchedulerException.h>
#include <Modloader/app/structs/TaskSchedulerException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskSchedulerException {
        inline app::TaskSchedulerException__Class** type_info() {
            static app::TaskSchedulerException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TaskSchedulerException__Class**)(modloader::win::memory::resolve_rva(0x0473E228));
            }
            return cache;
        }
        inline app::TaskSchedulerException__Class* get_class() {
            return il2cpp::get_class<app::TaskSchedulerException__Class>(type_info(), "System.Threading.Tasks", "TaskSchedulerException");
        }
        inline app::TaskSchedulerException* create() {
            return il2cpp::create_object<app::TaskSchedulerException>(get_class());
        }
    } // namespace TaskSchedulerException
} // namespace app::classes::types
