#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeLabel__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeLabel__Array__Class** type_info;
        inline app::RuntimeLabel__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeLabel__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "RuntimeLabel[]");
        }
        inline app::RuntimeLabel__Array* create() {
            return il2cpp::create_object<app::RuntimeLabel__Array>(get_class());
        }
    } // namespace RuntimeLabel__Array
} // namespace app::classes::types
