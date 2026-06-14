#pragma once
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/XmlSchemaDatatype__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaDatatype {
        inline app::XmlSchemaDatatype__Class** type_info() {
            static app::XmlSchemaDatatype__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaDatatype__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaDatatype__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaDatatype__Class>(type_info(), "System.Xml.Schema", "XmlSchemaDatatype");
        }
        inline app::XmlSchemaDatatype* create() {
            return il2cpp::create_object<app::XmlSchemaDatatype>(get_class());
        }
    } // namespace XmlSchemaDatatype
} // namespace app::classes::types
