#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNamespaceDeclarationsAttribute {
        inline app::XmlNamespaceDeclarationsAttribute__Class** type_info = (app::XmlNamespaceDeclarationsAttribute__Class**)(modloader::win::memory::resolve_rva(0x04703CB0));
        inline app::XmlNamespaceDeclarationsAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlNamespaceDeclarationsAttribute__Class>(type_info, "System.Xml.Serialization", "XmlNamespaceDeclarationsAttribute");
        }
        inline app::XmlNamespaceDeclarationsAttribute* create() {
            return il2cpp::create_object<app::XmlNamespaceDeclarationsAttribute>(get_class());
        }
    } // namespace XmlNamespaceDeclarationsAttribute
} // namespace app::classes::types
