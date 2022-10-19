#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberAnyElement {
        inline app::XmlTypeMapMemberAnyElement__Class** type_info = (app::XmlTypeMapMemberAnyElement__Class**)(modloader::win::memory::resolve_rva(0x04756E08));
        inline app::XmlTypeMapMemberAnyElement__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberAnyElement__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberAnyElement");
        }
        inline app::XmlTypeMapMemberAnyElement* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberAnyElement>(get_class());
        }
    } // namespace XmlTypeMapMemberAnyElement
} // namespace app::classes::types
