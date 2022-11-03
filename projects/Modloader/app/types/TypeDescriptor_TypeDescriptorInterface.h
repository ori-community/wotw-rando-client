#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeDescriptor_TypeDescriptorInterface {
        namespace {
            inline app::TypeDescriptor_TypeDescriptorInterface__Class* type_info_ref = nullptr;
        }
        inline app::TypeDescriptor_TypeDescriptorInterface__Class** type_info = &type_info_ref;
        inline app::TypeDescriptor_TypeDescriptorInterface__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_TypeDescriptorInterface__Class>(type_info, "System.ComponentModel", "TypeDescriptor", "TypeDescriptorInterface");
        }
        inline app::TypeDescriptor_TypeDescriptorInterface* create() {
            return il2cpp::create_object<app::TypeDescriptor_TypeDescriptorInterface>(get_class());
        }
    } // namespace TypeDescriptor_TypeDescriptorInterface
} // namespace app::classes::types
