#pragma once
#include <Modloader/app/structs/XmlSchemaObjectTable_XmlSchemaObjectEntry__Array.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_XmlSchemaObjectEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable_XmlSchemaObjectEntry__Array {
        inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array__Class** type_info() {
            static app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array__Class>(type_info(), "System.Xml.Schema", "XmlSchemaObjectTable+XmlSchemaObjectEntry[]");
        }
        inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array>(get_class());
        }
    } // namespace XmlSchemaObjectTable_XmlSchemaObjectEntry__Array
} // namespace app::classes::types
