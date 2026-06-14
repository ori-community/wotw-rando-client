#pragma once
#include <Modloader/app/structs/Task_WhenAllPromise.h>
#include <Modloader/app/structs/Task_WhenAllPromise__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Task_WhenAllPromise {
        inline app::Task_WhenAllPromise__Class** type_info() {
            static app::Task_WhenAllPromise__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Task_WhenAllPromise__Class**)(modloader::win::memory::resolve_rva(0x0477AE60));
            }
            return cache;
        }
        inline app::Task_WhenAllPromise__Class* get_class() {
            return il2cpp::get_nested_class<app::Task_WhenAllPromise__Class>(type_info(), "System.Threading.Tasks", "Task", "WhenAllPromise");
        }
        inline app::Task_WhenAllPromise* create() {
            return il2cpp::create_object<app::Task_WhenAllPromise>(get_class());
        }
    } // namespace Task_WhenAllPromise
} // namespace app::classes::types
