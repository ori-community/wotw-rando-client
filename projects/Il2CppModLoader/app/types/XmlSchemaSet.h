#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSet__Class** type_info;
        inline app::XmlSchemaSet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSet__Class>(type_info, "System.Xml.Schema", "XmlSchemaSet");
        }
        inline app::XmlSchemaSet* create() {
            return il2cpp::create_object<app::XmlSchemaSet>(get_class());
        }
    } // namespace XmlSchemaSet
} // namespace app::classes::types
