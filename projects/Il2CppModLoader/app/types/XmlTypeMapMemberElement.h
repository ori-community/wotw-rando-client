#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeMapMemberElement__Class** type_info;
        inline app::XmlTypeMapMemberElement__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberElement__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberElement");
        }
        inline app::XmlTypeMapMemberElement* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberElement>(get_class());
        }
    } // namespace XmlTypeMapMemberElement
} // namespace app::classes::types
