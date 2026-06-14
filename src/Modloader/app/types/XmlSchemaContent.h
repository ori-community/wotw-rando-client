#pragma once
#include <Modloader/app/structs/XmlSchemaContent.h>
#include <Modloader/app/structs/XmlSchemaContent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaContent {
        inline app::XmlSchemaContent__Class** type_info() {
            static app::XmlSchemaContent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaContent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaContent__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaContent__Class>(type_info(), "System.Xml.Schema", "XmlSchemaContent");
        }
        inline app::XmlSchemaContent* create() {
            return il2cpp::create_object<app::XmlSchemaContent>(get_class());
        }
    } // namespace XmlSchemaContent
} // namespace app::classes::types
