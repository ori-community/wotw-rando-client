#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_XmlSchemaObjectEntry__Class.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_XmlSchemaObjectEntry.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_XmlSchemaObjectEntry__Boxed.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_XmlSchemaObjectEntry__Array.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable_XmlSchemaObjectEntry {
        inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Class** type_info = (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Class**)(modloader::win::memory::resolve_rva(0x04721780));
        inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectTable", "XmlSchemaObjectEntry");
        }
        inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable_XmlSchemaObjectEntry>(get_class());
        }
        inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Boxed* box(app::XmlSchemaObjectTable_XmlSchemaObjectEntry value) {
            return il2cpp::box_value<app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Boxed>(get_class(), value);
        }
        inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array>(get_class(), size);
        }
        inline app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array* create_array(const std::vector<app::XmlSchemaObjectTable_XmlSchemaObjectEntry>& items) {
            return il2cpp::array_new<app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array>(get_class(), items);
        }
    } // namespace XmlSchemaObjectTable_XmlSchemaObjectEntry
} // namespace app::classes::types
