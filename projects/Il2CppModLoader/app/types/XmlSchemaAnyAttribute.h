#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAnyAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaAnyAttribute__Class** type_info;
        inline app::XmlSchemaAnyAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAnyAttribute__Class>(type_info, "System.Xml.Schema", "XmlSchemaAnyAttribute");
        }
        inline app::XmlSchemaAnyAttribute* create() {
            return il2cpp::create_object<app::XmlSchemaAnyAttribute>(get_class());
        }
    } // namespace XmlSchemaAnyAttribute
} // namespace app::classes::types
