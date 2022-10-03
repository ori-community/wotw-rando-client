#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectPropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectPropertyDescriptor__Class** type_info;
        inline app::ReflectPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::ReflectPropertyDescriptor__Class>(type_info, "System.ComponentModel", "ReflectPropertyDescriptor");
        }
        inline app::ReflectPropertyDescriptor* create() {
            return il2cpp::create_object<app::ReflectPropertyDescriptor>(get_class());
        }
        inline app::ReflectPropertyDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::ReflectPropertyDescriptor__Array>(get_class(), size);
        }
    } // namespace ReflectPropertyDescriptor
} // namespace app::classes::types
