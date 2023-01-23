#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_ValuesCollection__Class.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_ValuesCollection.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable_ValuesCollection {
        inline app::XmlSchemaObjectTable_ValuesCollection__Class** type_info = (app::XmlSchemaObjectTable_ValuesCollection__Class**)(modloader::win::memory::resolve_rva(0x04759948));
        inline app::XmlSchemaObjectTable_ValuesCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaObjectTable_ValuesCollection__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectTable", "ValuesCollection");
        }
        inline app::XmlSchemaObjectTable_ValuesCollection* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable_ValuesCollection>(get_class());
        }
    } // namespace XmlSchemaObjectTable_ValuesCollection
} // namespace app::classes::types
