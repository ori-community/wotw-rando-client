#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Task_1_System_Int32___Array {
        inline app::Task_1_System_Int32___Array__Class** type_info = (app::Task_1_System_Int32___Array__Class**)(modloader::win::memory::resolve_rva(0x04740420));
        inline app::Task_1_System_Int32___Array__Class* get_class() {
            return il2cpp::get_class<app::Task_1_System_Int32___Array__Class>(type_info, "System.Threading.Tasks", "Task`1[System.Int32][]");
        }
        inline app::Task_1_System_Int32___Array* create() {
            return il2cpp::create_object<app::Task_1_System_Int32___Array>(get_class());
        }
    } // namespace Task_1_System_Int32___Array
} // namespace app::classes::types
