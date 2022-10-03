#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyDescriptorCollection_PropertyDescriptorEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class** type_info;
        inline app::PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class>(type_info, "System.ComponentModel", "PropertyDescriptorCollection", "PropertyDescriptorEnumerator");
        }
        inline app::PropertyDescriptorCollection_PropertyDescriptorEnumerator* create() {
            return il2cpp::create_object<app::PropertyDescriptorCollection_PropertyDescriptorEnumerator>(get_class());
        }
    } // namespace PropertyDescriptorCollection_PropertyDescriptorEnumerator
} // namespace app::classes::types
