#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Task__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Task__Array__Class** type_info;
        inline app::Task__Array__Class* get_class() {
            return il2cpp::get_class<app::Task__Array__Class>(type_info, "System.Threading.Tasks", "Task[]");
        }
        inline app::Task__Array* create() {
            return il2cpp::create_object<app::Task__Array>(get_class());
        }
    } // namespace Task__Array
} // namespace app::classes::types
