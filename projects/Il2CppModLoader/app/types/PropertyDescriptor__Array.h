#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyDescriptor__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyDescriptor__Array__Class** type_info;
        inline app::PropertyDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyDescriptor__Array__Class>(type_info, "System.ComponentModel", "PropertyDescriptor[]");
        }
        inline app::PropertyDescriptor__Array* create() {
            return il2cpp::create_object<app::PropertyDescriptor__Array>(get_class());
        }
    } // namespace PropertyDescriptor__Array
} // namespace app::classes::types
