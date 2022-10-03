#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaNotation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaNotation__Class** type_info;
        inline app::XmlSchemaNotation__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaNotation__Class>(type_info, "System.Xml.Schema", "XmlSchemaNotation");
        }
        inline app::XmlSchemaNotation* create() {
            return il2cpp::create_object<app::XmlSchemaNotation>(get_class());
        }
    } // namespace XmlSchemaNotation
} // namespace app::classes::types
