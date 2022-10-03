#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeMapMemberAttribute__Class** type_info;
        inline app::XmlTypeMapMemberAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberAttribute__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberAttribute");
        }
        inline app::XmlTypeMapMemberAttribute* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberAttribute>(get_class());
        }
        inline app::XmlTypeMapMemberAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlTypeMapMemberAttribute__Array>(get_class(), size);
        }
    } // namespace XmlTypeMapMemberAttribute
} // namespace app::classes::types
