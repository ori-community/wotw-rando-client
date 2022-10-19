#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaContentModel {
        namespace {
            inline app::XmlSchemaContentModel__Class* type_info_ref = nullptr;
        }
        inline app::XmlSchemaContentModel__Class** type_info = &type_info_ref;
        inline app::XmlSchemaContentModel__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaContentModel__Class>(type_info, "System.Xml.Schema", "XmlSchemaContentModel");
        }
        inline app::XmlSchemaContentModel* create() {
            return il2cpp::create_object<app::XmlSchemaContentModel>(get_class());
        }
    } // namespace XmlSchemaContentModel
} // namespace app::classes::types
