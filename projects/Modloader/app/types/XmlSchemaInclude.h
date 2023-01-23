#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaInclude__Class.h>
#include <Modloader/app/structs/XmlSchemaInclude.h>

namespace app::classes::types {
    namespace XmlSchemaInclude {
        inline app::XmlSchemaInclude__Class** type_info = (app::XmlSchemaInclude__Class**)(modloader::win::memory::resolve_rva(0x0478DFB8));
        inline app::XmlSchemaInclude__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaInclude__Class>(type_info, "System.Xml.Schema", "XmlSchemaInclude");
        }
        inline app::XmlSchemaInclude* create() {
            return il2cpp::create_object<app::XmlSchemaInclude>(get_class());
        }
    } // namespace XmlSchemaInclude
} // namespace app::classes::types
