#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptionProvider_EmptyCustomTypeDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class** type_info;
        inline app::TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptionProvider_EmptyCustomTypeDescriptor__Class>(type_info, "System.ComponentModel", "TypeDescriptionProvider", "EmptyCustomTypeDescriptor");
        }
        inline app::TypeDescriptionProvider_EmptyCustomTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptionProvider_EmptyCustomTypeDescriptor>(get_class());
        }
    } // namespace TypeDescriptionProvider_EmptyCustomTypeDescriptor
} // namespace app::classes::types
