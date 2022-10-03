#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberNamespaces {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeMapMemberNamespaces__Class** type_info;
        inline app::XmlTypeMapMemberNamespaces__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberNamespaces__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberNamespaces");
        }
        inline app::XmlTypeMapMemberNamespaces* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberNamespaces>(get_class());
        }
    } // namespace XmlTypeMapMemberNamespaces
} // namespace app::classes::types
