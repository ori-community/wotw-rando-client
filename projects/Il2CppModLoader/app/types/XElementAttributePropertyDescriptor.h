#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XElementAttributePropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XElementAttributePropertyDescriptor__Class** type_info;
        inline app::XElementAttributePropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementAttributePropertyDescriptor__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementAttributePropertyDescriptor");
        }
        inline app::XElementAttributePropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementAttributePropertyDescriptor>(get_class());
        }
    } // namespace XElementAttributePropertyDescriptor
} // namespace app::classes::types
