#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleContentExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSimpleContentExtension__Class** type_info;
        inline app::XmlSchemaSimpleContentExtension__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleContentExtension__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleContentExtension");
        }
        inline app::XmlSchemaSimpleContentExtension* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleContentExtension>(get_class());
        }
    } // namespace XmlSchemaSimpleContentExtension
} // namespace app::classes::types
