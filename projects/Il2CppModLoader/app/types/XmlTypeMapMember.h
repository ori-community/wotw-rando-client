#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMember {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeMapMember__Class** type_info;
        inline app::XmlTypeMapMember__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMember__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMember");
        }
        inline app::XmlTypeMapMember* create() {
            return il2cpp::create_object<app::XmlTypeMapMember>(get_class());
        }
    } // namespace XmlTypeMapMember
} // namespace app::classes::types
