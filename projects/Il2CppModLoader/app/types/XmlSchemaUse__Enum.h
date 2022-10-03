#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaUse__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaUse__Enum__Class** type_info;
        inline app::XmlSchemaUse__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaUse__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaUse");
        }
        inline app::XmlSchemaUse__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaUse__Enum>(get_class());
        }
    } // namespace XmlSchemaUse__Enum
} // namespace app::classes::types
