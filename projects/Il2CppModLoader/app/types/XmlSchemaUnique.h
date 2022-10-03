#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaUnique {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaUnique__Class** type_info;
        inline app::XmlSchemaUnique__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaUnique__Class>(type_info, "System.Xml.Schema", "XmlSchemaUnique");
        }
        inline app::XmlSchemaUnique* create() {
            return il2cpp::create_object<app::XmlSchemaUnique>(get_class());
        }
    } // namespace XmlSchemaUnique
} // namespace app::classes::types
