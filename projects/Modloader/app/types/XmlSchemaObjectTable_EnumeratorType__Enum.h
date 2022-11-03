#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable_EnumeratorType__Enum {
        namespace {
            inline app::XmlSchemaObjectTable_EnumeratorType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlSchemaObjectTable_EnumeratorType__Enum__Class** type_info = &type_info_ref;
        inline app::XmlSchemaObjectTable_EnumeratorType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaObjectTable_EnumeratorType__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectTable", "EnumeratorType");
        }
        inline app::XmlSchemaObjectTable_EnumeratorType__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable_EnumeratorType__Enum>(get_class());
        }
    } // namespace XmlSchemaObjectTable_EnumeratorType__Enum
} // namespace app::classes::types
