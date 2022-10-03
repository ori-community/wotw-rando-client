#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionOnlyType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionOnlyType__Class** type_info;
        inline app::ReflectionOnlyType__Class* get_class() {
            return il2cpp::get_class<app::ReflectionOnlyType__Class>(type_info, "System", "ReflectionOnlyType");
        }
        inline app::ReflectionOnlyType* create() {
            return il2cpp::create_object<app::ReflectionOnlyType>(get_class());
        }
    } // namespace ReflectionOnlyType
} // namespace app::classes::types
