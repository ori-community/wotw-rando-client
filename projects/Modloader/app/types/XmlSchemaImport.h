#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaImport__Class.h>
#include <Modloader/app/structs/XmlSchemaImport.h>

namespace app::classes::types {
    namespace XmlSchemaImport {
        inline app::XmlSchemaImport__Class** type_info = (app::XmlSchemaImport__Class**)(modloader::win::memory::resolve_rva(0x04730A08));
        inline app::XmlSchemaImport__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaImport__Class>(type_info, "System.Xml.Schema", "XmlSchemaImport");
        }
        inline app::XmlSchemaImport* create() {
            return il2cpp::create_object<app::XmlSchemaImport>(get_class());
        }
    } // namespace XmlSchemaImport
} // namespace app::classes::types
