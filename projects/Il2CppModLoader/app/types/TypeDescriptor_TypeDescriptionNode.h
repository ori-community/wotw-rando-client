#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_TypeDescriptionNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeDescriptor_TypeDescriptionNode__Class** type_info;
        inline app::TypeDescriptor_TypeDescriptionNode__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_TypeDescriptionNode__Class>(type_info, "System.ComponentModel", "TypeDescriptor", "TypeDescriptionNode");
        }
        inline app::TypeDescriptor_TypeDescriptionNode* create() {
            return il2cpp::create_object<app::TypeDescriptor_TypeDescriptionNode>(get_class());
        }
    } // namespace TypeDescriptor_TypeDescriptionNode
} // namespace app::classes::types
