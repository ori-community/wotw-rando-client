#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlQualifiedName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlQualifiedName__Class** type_info;
        inline app::XmlQualifiedName__Class* get_class() {
            return il2cpp::get_class<app::XmlQualifiedName__Class>(type_info, "System.Xml", "XmlQualifiedName");
        }
        inline app::XmlQualifiedName* create() {
            return il2cpp::create_object<app::XmlQualifiedName>(get_class());
        }
        inline app::XmlQualifiedName__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlQualifiedName__Array>(get_class(), size);
        }
    } // namespace XmlQualifiedName
} // namespace app::classes::types
