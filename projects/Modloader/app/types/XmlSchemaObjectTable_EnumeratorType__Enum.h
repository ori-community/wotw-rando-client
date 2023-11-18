#pragma once
#include <Modloader/app/structs/XmlSchemaObjectTable_EnumeratorType__Enum.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_EnumeratorType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable_EnumeratorType__Enum {
        inline app::XmlSchemaObjectTable_EnumeratorType__Enum__Class** type_info() {
            static app::XmlSchemaObjectTable_EnumeratorType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaObjectTable_EnumeratorType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaObjectTable_EnumeratorType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaObjectTable_EnumeratorType__Enum__Class>(type_info(), "System.Xml.Schema", "XmlSchemaObjectTable", "EnumeratorType");
        }
        inline app::XmlSchemaObjectTable_EnumeratorType__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable_EnumeratorType__Enum>(get_class());
        }
    } // namespace XmlSchemaObjectTable_EnumeratorType__Enum
} // namespace app::classes::types
