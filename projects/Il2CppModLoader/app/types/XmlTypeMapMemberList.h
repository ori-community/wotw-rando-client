#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeMapMemberList__Class** type_info;
        inline app::XmlTypeMapMemberList__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberList__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberList");
        }
        inline app::XmlTypeMapMemberList* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberList>(get_class());
        }
    } // namespace XmlTypeMapMemberList
} // namespace app::classes::types
