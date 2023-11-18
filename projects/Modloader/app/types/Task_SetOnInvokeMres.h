#pragma once
#include <Modloader/app/structs/Task_SetOnInvokeMres.h>
#include <Modloader/app/structs/Task_SetOnInvokeMres__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Task_SetOnInvokeMres {
        inline app::Task_SetOnInvokeMres__Class** type_info() {
            static app::Task_SetOnInvokeMres__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Task_SetOnInvokeMres__Class**)(modloader::win::memory::resolve_rva(0x04751DA0));
            }
            return cache;
        }
        inline app::Task_SetOnInvokeMres__Class* get_class() {
            return il2cpp::get_nested_class<app::Task_SetOnInvokeMres__Class>(type_info(), "System.Threading.Tasks", "Task", "SetOnInvokeMres");
        }
        inline app::Task_SetOnInvokeMres* create() {
            return il2cpp::create_object<app::Task_SetOnInvokeMres>(get_class());
        }
    } // namespace Task_SetOnInvokeMres
} // namespace app::classes::types
