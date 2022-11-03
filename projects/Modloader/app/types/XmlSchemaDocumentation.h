#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaDocumentation {
        inline app::XmlSchemaDocumentation__Class** type_info = (app::XmlSchemaDocumentation__Class**)(modloader::win::memory::resolve_rva(0x0477DCF0));
        inline app::XmlSchemaDocumentation__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaDocumentation__Class>(type_info, "System.Xml.Schema", "XmlSchemaDocumentation");
        }
        inline app::XmlSchemaDocumentation* create() {
            return il2cpp::create_object<app::XmlSchemaDocumentation>(get_class());
        }
    } // namespace XmlSchemaDocumentation
} // namespace app::classes::types
