#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAnnotation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaAnnotation__Class** type_info;
        inline app::XmlSchemaAnnotation__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAnnotation__Class>(type_info, "System.Xml.Schema", "XmlSchemaAnnotation");
        }
        inline app::XmlSchemaAnnotation* create() {
            return il2cpp::create_object<app::XmlSchemaAnnotation>(get_class());
        }
    } // namespace XmlSchemaAnnotation
} // namespace app::classes::types
