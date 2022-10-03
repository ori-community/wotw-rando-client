#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaExternal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaExternal__Class** type_info;
        inline app::XmlSchemaExternal__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaExternal__Class>(type_info, "System.Xml.Schema", "XmlSchemaExternal");
        }
        inline app::XmlSchemaExternal* create() {
            return il2cpp::create_object<app::XmlSchemaExternal>(get_class());
        }
    } // namespace XmlSchemaExternal
} // namespace app::classes::types
