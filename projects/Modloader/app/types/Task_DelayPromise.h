#pragma once
#include <Modloader/app/structs/Task_DelayPromise.h>
#include <Modloader/app/structs/Task_DelayPromise__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Task_DelayPromise {
        inline app::Task_DelayPromise__Class** type_info() {
            static app::Task_DelayPromise__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Task_DelayPromise__Class**)(modloader::win::memory::resolve_rva(0x0473D810));
            }
            return cache;
        }
        inline app::Task_DelayPromise__Class* get_class() {
            return il2cpp::get_nested_class<app::Task_DelayPromise__Class>(type_info(), "System.Threading.Tasks", "Task", "DelayPromise");
        }
        inline app::Task_DelayPromise* create() {
            return il2cpp::create_object<app::Task_DelayPromise>(get_class());
        }
    } // namespace Task_DelayPromise
} // namespace app::classes::types
