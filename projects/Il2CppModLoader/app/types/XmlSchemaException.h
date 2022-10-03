#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaException__Class** type_info;
        inline app::XmlSchemaException__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaException__Class>(type_info, "System.Xml.Schema", "XmlSchemaException");
        }
        inline app::XmlSchemaException* create() {
            return il2cpp::create_object<app::XmlSchemaException>(get_class());
        }
    } // namespace XmlSchemaException
} // namespace app::classes::types
