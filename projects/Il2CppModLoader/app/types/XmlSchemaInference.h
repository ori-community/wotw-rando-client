#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaInference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaInference__Class** type_info;
        inline app::XmlSchemaInference__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaInference__Class>(type_info, "System.Xml.Schema", "XmlSchemaInference");
        }
        inline app::XmlSchemaInference* create() {
            return il2cpp::create_object<app::XmlSchemaInference>(get_class());
        }
    } // namespace XmlSchemaInference
} // namespace app::classes::types
