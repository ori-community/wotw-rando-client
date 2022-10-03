#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Function_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Function_1__Class** type_info;
        inline app::Function_1__Class* get_class() {
            return il2cpp::get_class<app::Function_1__Class>(type_info, "System.Data", "Function");
        }
        inline app::Function_1* create() {
            return il2cpp::create_object<app::Function_1>(get_class());
        }
        inline app::Function_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Function_1__Array>(get_class(), size);
        }
    } // namespace Function_1
} // namespace app::classes::types
