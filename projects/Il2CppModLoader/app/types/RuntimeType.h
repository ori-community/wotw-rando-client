#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeType__Class** type_info;
        inline app::RuntimeType__Class* get_class() {
            return il2cpp::get_class<app::RuntimeType__Class>(type_info, "System", "RuntimeType");
        }
        inline app::RuntimeType* create() {
            return il2cpp::create_object<app::RuntimeType>(get_class());
        }
        inline app::RuntimeType__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeType__Array>(get_class(), size);
        }
    } // namespace RuntimeType
} // namespace app::classes::types
