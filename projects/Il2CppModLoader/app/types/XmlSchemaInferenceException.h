#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaInferenceException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaInferenceException__Class** type_info;
        inline app::XmlSchemaInferenceException__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaInferenceException__Class>(type_info, "System.Xml.Schema", "XmlSchemaInferenceException");
        }
        inline app::XmlSchemaInferenceException* create() {
            return il2cpp::create_object<app::XmlSchemaInferenceException>(get_class());
        }
    } // namespace XmlSchemaInferenceException
} // namespace app::classes::types
