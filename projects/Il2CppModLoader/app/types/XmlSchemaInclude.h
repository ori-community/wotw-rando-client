#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaInclude {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaInclude__Class** type_info;
        inline app::XmlSchemaInclude__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaInclude__Class>(type_info, "System.Xml.Schema", "XmlSchemaInclude");
        }
        inline app::XmlSchemaInclude* create() {
            return il2cpp::create_object<app::XmlSchemaInclude>(get_class());
        }
    } // namespace XmlSchemaInclude
} // namespace app::classes::types
