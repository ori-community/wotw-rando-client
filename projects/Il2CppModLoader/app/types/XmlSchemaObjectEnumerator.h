#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObjectEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaObjectEnumerator__Class** type_info;
        inline app::XmlSchemaObjectEnumerator__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObjectEnumerator__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectEnumerator");
        }
        inline app::XmlSchemaObjectEnumerator* create() {
            return il2cpp::create_object<app::XmlSchemaObjectEnumerator>(get_class());
        }
    } // namespace XmlSchemaObjectEnumerator
} // namespace app::classes::types
