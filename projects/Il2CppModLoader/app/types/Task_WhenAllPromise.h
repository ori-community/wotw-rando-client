#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Task_WhenAllPromise {
        inline app::Task_WhenAllPromise__Class** type_info = (app::Task_WhenAllPromise__Class**)(modloader::win::memory::resolve_rva(0x0477AE60));
        inline app::Task_WhenAllPromise__Class* get_class() {
            return il2cpp::get_nested_class<app::Task_WhenAllPromise__Class>(type_info, "System.Threading.Tasks", "Task", "WhenAllPromise");
        }
        inline app::Task_WhenAllPromise* create() {
            return il2cpp::create_object<app::Task_WhenAllPromise>(get_class());
        }
    } // namespace Task_WhenAllPromise
} // namespace app::classes::types
