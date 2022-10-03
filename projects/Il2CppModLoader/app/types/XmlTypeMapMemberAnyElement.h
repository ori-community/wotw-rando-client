#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberAnyElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeMapMemberAnyElement__Class** type_info;
        inline app::XmlTypeMapMemberAnyElement__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberAnyElement__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberAnyElement");
        }
        inline app::XmlTypeMapMemberAnyElement* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberAnyElement>(get_class());
        }
    } // namespace XmlTypeMapMemberAnyElement
} // namespace app::classes::types
