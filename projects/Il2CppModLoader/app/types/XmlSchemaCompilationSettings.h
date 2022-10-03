#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaCompilationSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaCompilationSettings__Class** type_info;
        inline app::XmlSchemaCompilationSettings__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaCompilationSettings__Class>(type_info, "System.Xml.Schema", "XmlSchemaCompilationSettings");
        }
        inline app::XmlSchemaCompilationSettings* create() {
            return il2cpp::create_object<app::XmlSchemaCompilationSettings>(get_class());
        }
    } // namespace XmlSchemaCompilationSettings
} // namespace app::classes::types
