#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberExpandable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeMapMemberExpandable__Class** type_info;
        inline app::XmlTypeMapMemberExpandable__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberExpandable__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberExpandable");
        }
        inline app::XmlTypeMapMemberExpandable* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberExpandable>(get_class());
        }
    } // namespace XmlTypeMapMemberExpandable
} // namespace app::classes::types
