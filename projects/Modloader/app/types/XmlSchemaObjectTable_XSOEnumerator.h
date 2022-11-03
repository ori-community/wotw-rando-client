#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable_XSOEnumerator {
        inline app::XmlSchemaObjectTable_XSOEnumerator__Class** type_info = (app::XmlSchemaObjectTable_XSOEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0472A838));
        inline app::XmlSchemaObjectTable_XSOEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaObjectTable_XSOEnumerator__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectTable", "XSOEnumerator");
        }
        inline app::XmlSchemaObjectTable_XSOEnumerator* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable_XSOEnumerator>(get_class());
        }
    } // namespace XmlSchemaObjectTable_XSOEnumerator
} // namespace app::classes::types
