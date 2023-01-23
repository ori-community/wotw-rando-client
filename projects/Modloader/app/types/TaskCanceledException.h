#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TaskCanceledException__Class.h>
#include <Modloader/app/structs/TaskCanceledException.h>

namespace app::classes::types {
    namespace TaskCanceledException {
        inline app::TaskCanceledException__Class** type_info = (app::TaskCanceledException__Class**)(modloader::win::memory::resolve_rva(0x0477C078));
        inline app::TaskCanceledException__Class* get_class() {
            return il2cpp::get_class<app::TaskCanceledException__Class>(type_info, "System.Threading.Tasks", "TaskCanceledException");
        }
        inline app::TaskCanceledException* create() {
            return il2cpp::create_object<app::TaskCanceledException>(get_class());
        }
    } // namespace TaskCanceledException
} // namespace app::classes::types
