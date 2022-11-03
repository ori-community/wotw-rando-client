#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberNamespaces {
        inline app::XmlTypeMapMemberNamespaces__Class** type_info = (app::XmlTypeMapMemberNamespaces__Class**)(modloader::win::memory::resolve_rva(0x04752988));
        inline app::XmlTypeMapMemberNamespaces__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberNamespaces__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberNamespaces");
        }
        inline app::XmlTypeMapMemberNamespaces* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberNamespaces>(get_class());
        }
    } // namespace XmlTypeMapMemberNamespaces
} // namespace app::classes::types
