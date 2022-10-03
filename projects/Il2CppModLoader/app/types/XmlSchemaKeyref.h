#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaKeyref {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaKeyref__Class** type_info;
        inline app::XmlSchemaKeyref__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaKeyref__Class>(type_info, "System.Xml.Schema", "XmlSchemaKeyref");
        }
        inline app::XmlSchemaKeyref* create() {
            return il2cpp::create_object<app::XmlSchemaKeyref>(get_class());
        }
    } // namespace XmlSchemaKeyref
} // namespace app::classes::types
