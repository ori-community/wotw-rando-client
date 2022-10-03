#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyDescriptor__Class** type_info;
        inline app::PropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::PropertyDescriptor__Class>(type_info, "System.ComponentModel", "PropertyDescriptor");
        }
        inline app::PropertyDescriptor* create() {
            return il2cpp::create_object<app::PropertyDescriptor>(get_class());
        }
        inline app::PropertyDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::PropertyDescriptor__Array>(get_class(), size);
        }
    } // namespace PropertyDescriptor
} // namespace app::classes::types
