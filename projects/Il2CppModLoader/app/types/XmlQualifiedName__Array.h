#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlQualifiedName__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlQualifiedName__Array__Class** type_info;
        inline app::XmlQualifiedName__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlQualifiedName__Array__Class>(type_info, "System.Xml", "XmlQualifiedName[]");
        }
        inline app::XmlQualifiedName__Array* create() {
            return il2cpp::create_object<app::XmlQualifiedName__Array>(get_class());
        }
    } // namespace XmlQualifiedName__Array
} // namespace app::classes::types
