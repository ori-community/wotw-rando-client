#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaXPath {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaXPath__Class** type_info;
        inline app::XmlSchemaXPath__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaXPath__Class>(type_info, "System.Xml.Schema", "XmlSchemaXPath");
        }
        inline app::XmlSchemaXPath* create() {
            return il2cpp::create_object<app::XmlSchemaXPath>(get_class());
        }
    } // namespace XmlSchemaXPath
} // namespace app::classes::types
