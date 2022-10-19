#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Task_SetOnInvokeMres {
        inline app::Task_SetOnInvokeMres__Class** type_info = (app::Task_SetOnInvokeMres__Class**)(modloader::win::memory::resolve_rva(0x04751DA0));
        inline app::Task_SetOnInvokeMres__Class* get_class() {
            return il2cpp::get_nested_class<app::Task_SetOnInvokeMres__Class>(type_info, "System.Threading.Tasks", "Task", "SetOnInvokeMres");
        }
        inline app::Task_SetOnInvokeMres* create() {
            return il2cpp::create_object<app::Task_SetOnInvokeMres>(get_class());
        }
    } // namespace Task_SetOnInvokeMres
} // namespace app::classes::types
