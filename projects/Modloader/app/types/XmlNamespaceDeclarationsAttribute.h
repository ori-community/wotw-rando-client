#pragma once
#include <Modloader/app/structs/XmlNamespaceDeclarationsAttribute.h>
#include <Modloader/app/structs/XmlNamespaceDeclarationsAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNamespaceDeclarationsAttribute {
        inline app::XmlNamespaceDeclarationsAttribute__Class** type_info() {
            static app::XmlNamespaceDeclarationsAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNamespaceDeclarationsAttribute__Class**)(modloader::win::memory::resolve_rva(0x04703CB0));
            }
            return cache;
        }
        inline app::XmlNamespaceDeclarationsAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlNamespaceDeclarationsAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlNamespaceDeclarationsAttribute");
        }
        inline app::XmlNamespaceDeclarationsAttribute* create() {
            return il2cpp::create_object<app::XmlNamespaceDeclarationsAttribute>(get_class());
        }
    } // namespace XmlNamespaceDeclarationsAttribute
} // namespace app::classes::types
