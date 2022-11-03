#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TaskSchedulerException {
        inline app::TaskSchedulerException__Class** type_info = (app::TaskSchedulerException__Class**)(modloader::win::memory::resolve_rva(0x0473E228));
        inline app::TaskSchedulerException__Class* get_class() {
            return il2cpp::get_class<app::TaskSchedulerException__Class>(type_info, "System.Threading.Tasks", "TaskSchedulerException");
        }
        inline app::TaskSchedulerException* create() {
            return il2cpp::create_object<app::TaskSchedulerException>(get_class());
        }
    } // namespace TaskSchedulerException
} // namespace app::classes::types
