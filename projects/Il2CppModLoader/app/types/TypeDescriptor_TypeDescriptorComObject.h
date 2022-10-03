#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_TypeDescriptorComObject {
        namespace {
            app::TypeDescriptor_TypeDescriptorComObject__Class* type_info_ref = nullptr;
        }
        app::TypeDescriptor_TypeDescriptorComObject__Class** type_info = &type_info_ref;
        inline app::TypeDescriptor_TypeDescriptorComObject__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_TypeDescriptorComObject__Class>(type_info, "System.ComponentModel", "TypeDescriptor", "TypeDescriptorComObject");
        }
        inline app::TypeDescriptor_TypeDescriptorComObject* create() {
            return il2cpp::create_object<app::TypeDescriptor_TypeDescriptorComObject>(get_class());
        }
    } // namespace TypeDescriptor_TypeDescriptorComObject
} // namespace app::classes::types
