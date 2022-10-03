#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaCollectionEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaCollectionEnumerator__Class** type_info;
        inline app::XmlSchemaCollectionEnumerator__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaCollectionEnumerator__Class>(type_info, "System.Xml.Schema", "XmlSchemaCollectionEnumerator");
        }
        inline app::XmlSchemaCollectionEnumerator* create() {
            return il2cpp::create_object<app::XmlSchemaCollectionEnumerator>(get_class());
        }
    } // namespace XmlSchemaCollectionEnumerator
} // namespace app::classes::types
