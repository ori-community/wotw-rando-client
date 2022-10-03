#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalVariable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocalVariable__Class** type_info;
        inline app::LocalVariable__Class* get_class() {
            return il2cpp::get_class<app::LocalVariable__Class>(type_info, "System.Linq.Expressions.Interpreter", "LocalVariable");
        }
        inline app::LocalVariable* create() {
            return il2cpp::create_object<app::LocalVariable>(get_class());
        }
        inline app::LocalVariable__Array* create_array(int size) {
            return il2cpp::array_new<app::LocalVariable__Array>(get_class(), size);
        }
    } // namespace LocalVariable
} // namespace app::classes::types
