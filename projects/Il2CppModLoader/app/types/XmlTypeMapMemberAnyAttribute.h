#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberAnyAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeMapMemberAnyAttribute__Class** type_info;
        inline app::XmlTypeMapMemberAnyAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberAnyAttribute__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberAnyAttribute");
        }
        inline app::XmlTypeMapMemberAnyAttribute* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberAnyAttribute>(get_class());
        }
    } // namespace XmlTypeMapMemberAnyAttribute
} // namespace app::classes::types
