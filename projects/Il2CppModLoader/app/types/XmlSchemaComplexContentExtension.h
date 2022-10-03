#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaComplexContentExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaComplexContentExtension__Class** type_info;
        inline app::XmlSchemaComplexContentExtension__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaComplexContentExtension__Class>(type_info, "System.Xml.Schema", "XmlSchemaComplexContentExtension");
        }
        inline app::XmlSchemaComplexContentExtension* create() {
            return il2cpp::create_object<app::XmlSchemaComplexContentExtension>(get_class());
        }
    } // namespace XmlSchemaComplexContentExtension
} // namespace app::classes::types
