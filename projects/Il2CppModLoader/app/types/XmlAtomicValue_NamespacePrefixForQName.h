#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAtomicValue_NamespacePrefixForQName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAtomicValue_NamespacePrefixForQName__Class** type_info;
        inline app::XmlAtomicValue_NamespacePrefixForQName__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlAtomicValue_NamespacePrefixForQName__Class>(type_info, "System.Xml.Schema", "XmlAtomicValue", "NamespacePrefixForQName");
        }
        inline app::XmlAtomicValue_NamespacePrefixForQName* create() {
            return il2cpp::create_object<app::XmlAtomicValue_NamespacePrefixForQName>(get_class());
        }
    } // namespace XmlAtomicValue_NamespacePrefixForQName
} // namespace app::classes::types
