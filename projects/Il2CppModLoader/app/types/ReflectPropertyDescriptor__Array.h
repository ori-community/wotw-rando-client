#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectPropertyDescriptor__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectPropertyDescriptor__Array__Class** type_info;
        inline app::ReflectPropertyDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::ReflectPropertyDescriptor__Array__Class>(type_info, "System.ComponentModel", "ReflectPropertyDescriptor[]");
        }
        inline app::ReflectPropertyDescriptor__Array* create() {
            return il2cpp::create_object<app::ReflectPropertyDescriptor__Array>(get_class());
        }
    } // namespace ReflectPropertyDescriptor__Array
} // namespace app::classes::types
