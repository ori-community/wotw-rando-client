#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberAttribute__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeMapMemberAttribute__Array__Class** type_info;
        inline app::XmlTypeMapMemberAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberAttribute__Array__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberAttribute[]");
        }
        inline app::XmlTypeMapMemberAttribute__Array* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberAttribute__Array>(get_class());
        }
    } // namespace XmlTypeMapMemberAttribute__Array
} // namespace app::classes::types
