#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Task_1_System_Int32___Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Task_1_System_Int32___Array__Class** type_info;
        inline app::Task_1_System_Int32___Array__Class* get_class() {
            return il2cpp::get_class<app::Task_1_System_Int32___Array__Class>(type_info, "System.Threading.Tasks", "Task`1[System.Int32][]");
        }
        inline app::Task_1_System_Int32___Array* create() {
            return il2cpp::create_object<app::Task_1_System_Int32___Array>(get_class());
        }
    } // namespace Task_1_System_Int32___Array
} // namespace app::classes::types
