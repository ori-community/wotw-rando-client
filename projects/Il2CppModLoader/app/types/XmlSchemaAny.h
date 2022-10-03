#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAny {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaAny__Class** type_info;
        inline app::XmlSchemaAny__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAny__Class>(type_info, "System.Xml.Schema", "XmlSchemaAny");
        }
        inline app::XmlSchemaAny* create() {
            return il2cpp::create_object<app::XmlSchemaAny>(get_class());
        }
    } // namespace XmlSchemaAny
} // namespace app::classes::types
