#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaContent {
        namespace {
            app::XmlSchemaContent__Class* type_info_ref = nullptr;
        }
        app::XmlSchemaContent__Class** type_info = &type_info_ref;
        inline app::XmlSchemaContent__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaContent__Class>(type_info, "System.Xml.Schema", "XmlSchemaContent");
        }
        inline app::XmlSchemaContent* create() {
            return il2cpp::create_object<app::XmlSchemaContent>(get_class());
        }
    } // namespace XmlSchemaContent
} // namespace app::classes::types
