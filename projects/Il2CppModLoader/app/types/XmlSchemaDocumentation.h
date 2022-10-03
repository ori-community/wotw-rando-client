#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaDocumentation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaDocumentation__Class** type_info;
        inline app::XmlSchemaDocumentation__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaDocumentation__Class>(type_info, "System.Xml.Schema", "XmlSchemaDocumentation");
        }
        inline app::XmlSchemaDocumentation* create() {
            return il2cpp::create_object<app::XmlSchemaDocumentation>(get_class());
        }
    } // namespace XmlSchemaDocumentation
} // namespace app::classes::types
