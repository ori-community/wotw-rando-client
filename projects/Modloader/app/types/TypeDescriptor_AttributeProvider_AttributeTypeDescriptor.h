#pragma once
#include <Modloader/app/structs/TypeDescriptor_AttributeProvider_AttributeTypeDescriptor.h>
#include <Modloader/app/structs/TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_AttributeProvider_AttributeTypeDescriptor {
        inline app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class** type_info() {
            static app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0472A898));
            }
            return cache;
        }
        inline app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class>(type_info(), "System.ComponentModel", "TypeDescriptor+AttributeProvider", "AttributeTypeDescriptor");
        }
        inline app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor>(get_class());
        }
    } // namespace TypeDescriptor_AttributeProvider_AttributeTypeDescriptor
} // namespace app::classes::types
