#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAnnotated {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaAnnotated__Class** type_info;
        inline app::XmlSchemaAnnotated__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAnnotated__Class>(type_info, "System.Xml.Schema", "XmlSchemaAnnotated");
        }
        inline app::XmlSchemaAnnotated* create() {
            return il2cpp::create_object<app::XmlSchemaAnnotated>(get_class());
        }
    } // namespace XmlSchemaAnnotated
} // namespace app::classes::types
