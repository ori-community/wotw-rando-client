#pragma once
#include <Modloader/app/structs/TaskCanceledException.h>
#include <Modloader/app/structs/TaskCanceledException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskCanceledException {
        inline app::TaskCanceledException__Class** type_info() {
            static app::TaskCanceledException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TaskCanceledException__Class**)(modloader::win::memory::resolve_rva(0x0477C078));
            }
            return cache;
        }
        inline app::TaskCanceledException__Class* get_class() {
            return il2cpp::get_class<app::TaskCanceledException__Class>(type_info(), "System.Threading.Tasks", "TaskCanceledException");
        }
        inline app::TaskCanceledException* create() {
            return il2cpp::create_object<app::TaskCanceledException>(get_class());
        }
    } // namespace TaskCanceledException
} // namespace app::classes::types
