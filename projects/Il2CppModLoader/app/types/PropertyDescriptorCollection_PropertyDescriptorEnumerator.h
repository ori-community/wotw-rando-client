#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyDescriptorCollection_PropertyDescriptorEnumerator {
        inline app::PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class** type_info = (app::PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0477C1C0));
        inline app::PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class>(type_info, "System.ComponentModel", "PropertyDescriptorCollection", "PropertyDescriptorEnumerator");
        }
        inline app::PropertyDescriptorCollection_PropertyDescriptorEnumerator* create() {
            return il2cpp::create_object<app::PropertyDescriptorCollection_PropertyDescriptorEnumerator>(get_class());
        }
    } // namespace PropertyDescriptorCollection_PropertyDescriptorEnumerator
} // namespace app::classes::types
