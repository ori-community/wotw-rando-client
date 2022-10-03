#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAll {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaAll__Class** type_info;
        inline app::XmlSchemaAll__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAll__Class>(type_info, "System.Xml.Schema", "XmlSchemaAll");
        }
        inline app::XmlSchemaAll* create() {
            return il2cpp::create_object<app::XmlSchemaAll>(get_class());
        }
    } // namespace XmlSchemaAll
} // namespace app::classes::types
