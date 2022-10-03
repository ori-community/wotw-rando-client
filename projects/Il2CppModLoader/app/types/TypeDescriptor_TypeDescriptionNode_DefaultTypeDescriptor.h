#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class** type_info;
        inline app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class>(type_info, "System.ComponentModel", "TypeDescriptor+TypeDescriptionNode", "DefaultTypeDescriptor");
        }
        inline app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor>(get_class());
        }
        inline app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed* box(app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor value) {
            return il2cpp::box_value<app::TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed>(get_class(), value);
        }
    } // namespace TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor
} // namespace app::classes::types
