#pragma once
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptorComObject.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptorComObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_TypeDescriptorComObject {
        inline app::TypeDescriptor_TypeDescriptorComObject__Class** type_info() {
            static app::TypeDescriptor_TypeDescriptorComObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeDescriptor_TypeDescriptorComObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeDescriptor_TypeDescriptorComObject__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_TypeDescriptorComObject__Class>(type_info(), "System.ComponentModel", "TypeDescriptor", "TypeDescriptorComObject");
        }
        inline app::TypeDescriptor_TypeDescriptorComObject* create() {
            return il2cpp::create_object<app::TypeDescriptor_TypeDescriptorComObject>(get_class());
        }
    } // namespace TypeDescriptor_TypeDescriptorComObject
} // namespace app::classes::types
