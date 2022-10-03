#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable_XSODictionaryEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaObjectTable_XSODictionaryEnumerator__Class** type_info;
        inline app::XmlSchemaObjectTable_XSODictionaryEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaObjectTable_XSODictionaryEnumerator__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectTable", "XSODictionaryEnumerator");
        }
        inline app::XmlSchemaObjectTable_XSODictionaryEnumerator* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable_XSODictionaryEnumerator>(get_class());
        }
    } // namespace XmlSchemaObjectTable_XSODictionaryEnumerator
} // namespace app::classes::types
