#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Function_1__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Function_1__Array__Class** type_info;
        inline app::Function_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Function_1__Array__Class>(type_info, "System.Data", "Function[]");
        }
        inline app::Function_1__Array* create() {
            return il2cpp::create_object<app::Function_1__Array>(get_class());
        }
    } // namespace Function_1__Array
} // namespace app::classes::types
