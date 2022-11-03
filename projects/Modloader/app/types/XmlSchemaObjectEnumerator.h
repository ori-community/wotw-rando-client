#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaObjectEnumerator {
        inline app::XmlSchemaObjectEnumerator__Class** type_info = (app::XmlSchemaObjectEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0477C0C0));
        inline app::XmlSchemaObjectEnumerator__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObjectEnumerator__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectEnumerator");
        }
        inline app::XmlSchemaObjectEnumerator* create() {
            return il2cpp::create_object<app::XmlSchemaObjectEnumerator>(get_class());
        }
    } // namespace XmlSchemaObjectEnumerator
} // namespace app::classes::types
