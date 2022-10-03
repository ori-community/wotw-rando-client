#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeType__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeType__Array__Class** type_info;
        inline app::RuntimeType__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeType__Array__Class>(type_info, "System", "RuntimeType[]");
        }
        inline app::RuntimeType__Array* create() {
            return il2cpp::create_object<app::RuntimeType__Array>(get_class());
        }
    } // namespace RuntimeType__Array
} // namespace app::classes::types
