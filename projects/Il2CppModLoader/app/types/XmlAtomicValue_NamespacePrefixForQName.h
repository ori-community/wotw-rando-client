#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAtomicValue_NamespacePrefixForQName {
        inline app::XmlAtomicValue_NamespacePrefixForQName__Class** type_info = (app::XmlAtomicValue_NamespacePrefixForQName__Class**)(modloader::win::memory::resolve_rva(0x0478D278));
        inline app::XmlAtomicValue_NamespacePrefixForQName__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlAtomicValue_NamespacePrefixForQName__Class>(type_info, "System.Xml.Schema", "XmlAtomicValue", "NamespacePrefixForQName");
        }
        inline app::XmlAtomicValue_NamespacePrefixForQName* create() {
            return il2cpp::create_object<app::XmlAtomicValue_NamespacePrefixForQName>(get_class());
        }
    } // namespace XmlAtomicValue_NamespacePrefixForQName
} // namespace app::classes::types
