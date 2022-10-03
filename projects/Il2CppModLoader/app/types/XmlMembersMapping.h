#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlMembersMapping {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlMembersMapping__Class** type_info;
        inline app::XmlMembersMapping__Class* get_class() {
            return il2cpp::get_class<app::XmlMembersMapping__Class>(type_info, "System.Xml.Serialization", "XmlMembersMapping");
        }
        inline app::XmlMembersMapping* create() {
            return il2cpp::create_object<app::XmlMembersMapping>(get_class());
        }
    } // namespace XmlMembersMapping
} // namespace app::classes::types
