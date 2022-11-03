#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberElement {
        inline app::XmlTypeMapMemberElement__Class** type_info = (app::XmlTypeMapMemberElement__Class**)(modloader::win::memory::resolve_rva(0x0474F7D0));
        inline app::XmlTypeMapMemberElement__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberElement__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberElement");
        }
        inline app::XmlTypeMapMemberElement* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberElement>(get_class());
        }
    } // namespace XmlTypeMapMemberElement
} // namespace app::classes::types
