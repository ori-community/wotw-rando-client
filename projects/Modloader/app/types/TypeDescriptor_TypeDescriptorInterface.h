#pragma once
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptorInterface.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptorInterface__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_TypeDescriptorInterface {
        inline app::TypeDescriptor_TypeDescriptorInterface__Class** type_info() {
            static app::TypeDescriptor_TypeDescriptorInterface__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeDescriptor_TypeDescriptorInterface__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeDescriptor_TypeDescriptorInterface__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_TypeDescriptorInterface__Class>(type_info(), "System.ComponentModel", "TypeDescriptor", "TypeDescriptorInterface");
        }
        inline app::TypeDescriptor_TypeDescriptorInterface* create() {
            return il2cpp::create_object<app::TypeDescriptor_TypeDescriptorInterface>(get_class());
        }
    } // namespace TypeDescriptor_TypeDescriptorInterface
} // namespace app::classes::types
