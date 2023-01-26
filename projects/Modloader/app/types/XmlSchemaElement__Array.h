#pragma once
#include <Modloader/app/structs/XmlSchemaElement__Array.h>
#include <Modloader/app/structs/XmlSchemaElement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaElement__Array {
        inline app::XmlSchemaElement__Array__Class** type_info() {
            static app::XmlSchemaElement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaElement__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaElement__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaElement__Array__Class>(type_info(), "System.Xml.Schema", "XmlSchemaElement[]");
        }
        inline app::XmlSchemaElement__Array* create() {
            return il2cpp::create_object<app::XmlSchemaElement__Array>(get_class());
        }
    } // namespace XmlSchemaElement__Array
} // namespace app::classes::types
