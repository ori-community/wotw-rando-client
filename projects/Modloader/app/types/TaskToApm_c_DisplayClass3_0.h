#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TaskToApm_c_DisplayClass3_0__Class.h>
#include <Modloader/app/structs/TaskToApm_c_DisplayClass3_0.h>

namespace app::classes::types {
    namespace TaskToApm_c_DisplayClass3_0 {
        inline app::TaskToApm_c_DisplayClass3_0__Class** type_info = (app::TaskToApm_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x047036E0));
        inline app::TaskToApm_c_DisplayClass3_0__Class* get_class() {
            return il2cpp::get_nested_class<app::TaskToApm_c_DisplayClass3_0__Class>(type_info, "System.Threading.Tasks", "TaskToApm", "<>c__DisplayClass3_0");
        }
        inline app::TaskToApm_c_DisplayClass3_0* create() {
            return il2cpp::create_object<app::TaskToApm_c_DisplayClass3_0>(get_class());
        }
    } // namespace TaskToApm_c_DisplayClass3_0
} // namespace app::classes::types
