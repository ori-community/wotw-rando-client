#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Task_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Task_c__Class** type_info;
        inline app::Task_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Task_c__Class>(type_info, "System.Threading.Tasks", "Task", "<>c");
        }
        inline app::Task_c* create() {
            return il2cpp::create_object<app::Task_c>(get_class());
        }
    } // namespace Task_c
} // namespace app::classes::types
