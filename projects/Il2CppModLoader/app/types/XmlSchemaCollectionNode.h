#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaCollectionNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaCollectionNode__Class** type_info;
        inline app::XmlSchemaCollectionNode__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaCollectionNode__Class>(type_info, "System.Xml.Schema", "XmlSchemaCollectionNode");
        }
        inline app::XmlSchemaCollectionNode* create() {
            return il2cpp::create_object<app::XmlSchemaCollectionNode>(get_class());
        }
    } // namespace XmlSchemaCollectionNode
} // namespace app::classes::types
