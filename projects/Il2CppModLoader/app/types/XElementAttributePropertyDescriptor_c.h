#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XElementAttributePropertyDescriptor_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XElementAttributePropertyDescriptor_c__Class** type_info;
        inline app::XElementAttributePropertyDescriptor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XElementAttributePropertyDescriptor_c__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementAttributePropertyDescriptor", "<>c");
        }
        inline app::XElementAttributePropertyDescriptor_c* create() {
            return il2cpp::create_object<app::XElementAttributePropertyDescriptor_c>(get_class());
        }
    } // namespace XElementAttributePropertyDescriptor_c
} // namespace app::classes::types
