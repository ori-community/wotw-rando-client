#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaProviderAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaProviderAttribute__Class** type_info;
        inline app::XmlSchemaProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaProviderAttribute__Class>(type_info, "System.Xml.Serialization", "XmlSchemaProviderAttribute");
        }
        inline app::XmlSchemaProviderAttribute* create() {
            return il2cpp::create_object<app::XmlSchemaProviderAttribute>(get_class());
        }
    } // namespace XmlSchemaProviderAttribute
} // namespace app::classes::types
