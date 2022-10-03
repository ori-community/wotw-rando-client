#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaWhiteSpace__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaWhiteSpace__Enum__Class** type_info;
        inline app::XmlSchemaWhiteSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaWhiteSpace__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaWhiteSpace");
        }
        inline app::XmlSchemaWhiteSpace__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaWhiteSpace__Enum>(get_class());
        }
    } // namespace XmlSchemaWhiteSpace__Enum
} // namespace app::classes::types
