#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Task_c__Class.h>
#include <Modloader/app/structs/Task_c.h>

namespace app::classes::types {
    namespace Task_c {
        inline app::Task_c__Class** type_info = (app::Task_c__Class**)(modloader::win::memory::resolve_rva(0x0474C8E8));
        inline app::Task_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Task_c__Class>(type_info, "System.Threading.Tasks", "Task", "<>c");
        }
        inline app::Task_c* create() {
            return il2cpp::create_object<app::Task_c>(get_class());
        }
    } // namespace Task_c
} // namespace app::classes::types
