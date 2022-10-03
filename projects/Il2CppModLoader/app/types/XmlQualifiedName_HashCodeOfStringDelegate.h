#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlQualifiedName_HashCodeOfStringDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlQualifiedName_HashCodeOfStringDelegate__Class** type_info;
        inline app::XmlQualifiedName_HashCodeOfStringDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlQualifiedName_HashCodeOfStringDelegate__Class>(type_info, "System.Xml", "XmlQualifiedName", "HashCodeOfStringDelegate");
        }
        inline app::XmlQualifiedName_HashCodeOfStringDelegate* create() {
            return il2cpp::create_object<app::XmlQualifiedName_HashCodeOfStringDelegate>(get_class());
        }
    } // namespace XmlQualifiedName_HashCodeOfStringDelegate
} // namespace app::classes::types
