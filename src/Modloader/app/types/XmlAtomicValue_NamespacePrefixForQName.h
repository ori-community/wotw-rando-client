#pragma once
#include <Modloader/app/structs/XmlAtomicValue_NamespacePrefixForQName.h>
#include <Modloader/app/structs/XmlAtomicValue_NamespacePrefixForQName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAtomicValue_NamespacePrefixForQName {
        inline app::XmlAtomicValue_NamespacePrefixForQName__Class** type_info() {
            static app::XmlAtomicValue_NamespacePrefixForQName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAtomicValue_NamespacePrefixForQName__Class**)(modloader::win::memory::resolve_rva(0x0478D278));
            }
            return cache;
        }
        inline app::XmlAtomicValue_NamespacePrefixForQName__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlAtomicValue_NamespacePrefixForQName__Class>(type_info(), "System.Xml.Schema", "XmlAtomicValue", "NamespacePrefixForQName");
        }
        inline app::XmlAtomicValue_NamespacePrefixForQName* create() {
            return il2cpp::create_object<app::XmlAtomicValue_NamespacePrefixForQName>(get_class());
        }
    } // namespace XmlAtomicValue_NamespacePrefixForQName
} // namespace app::classes::types
