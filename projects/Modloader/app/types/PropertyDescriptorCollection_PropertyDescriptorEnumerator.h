#pragma once
#include <Modloader/app/structs/PropertyDescriptorCollection_PropertyDescriptorEnumerator.h>
#include <Modloader/app/structs/PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyDescriptorCollection_PropertyDescriptorEnumerator {
        inline app::PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class** type_info() {
            static app::PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0477C1C0));
            }
            return cache;
        }
        inline app::PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::PropertyDescriptorCollection_PropertyDescriptorEnumerator__Class>(type_info(), "System.ComponentModel", "PropertyDescriptorCollection", "PropertyDescriptorEnumerator");
        }
        inline app::PropertyDescriptorCollection_PropertyDescriptorEnumerator* create() {
            return il2cpp::create_object<app::PropertyDescriptorCollection_PropertyDescriptorEnumerator>(get_class());
        }
    } // namespace PropertyDescriptorCollection_PropertyDescriptorEnumerator
} // namespace app::classes::types
