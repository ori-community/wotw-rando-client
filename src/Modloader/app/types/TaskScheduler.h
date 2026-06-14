#pragma once
#include <Modloader/app/structs/TaskScheduler.h>
#include <Modloader/app/structs/TaskScheduler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskScheduler {
        inline app::TaskScheduler__Class** type_info() {
            static app::TaskScheduler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TaskScheduler__Class**)(modloader::win::memory::resolve_rva(0x04770BC8));
            }
            return cache;
        }
        inline app::TaskScheduler__Class* get_class() {
            return il2cpp::get_class<app::TaskScheduler__Class>(type_info(), "System.Threading.Tasks", "TaskScheduler");
        }
        inline app::TaskScheduler* create() {
            return il2cpp::create_object<app::TaskScheduler>(get_class());
        }
    } // namespace TaskScheduler
} // namespace app::classes::types
