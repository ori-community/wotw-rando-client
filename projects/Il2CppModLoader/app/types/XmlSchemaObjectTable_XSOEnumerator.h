#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable_XSOEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaObjectTable_XSOEnumerator__Class** type_info;
        inline app::XmlSchemaObjectTable_XSOEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaObjectTable_XSOEnumerator__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectTable", "XSOEnumerator");
        }
        inline app::XmlSchemaObjectTable_XSOEnumerator* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable_XSOEnumerator>(get_class());
        }
    } // namespace XmlSchemaObjectTable_XSOEnumerator
} // namespace app::classes::types
