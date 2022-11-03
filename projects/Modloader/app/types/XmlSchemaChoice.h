#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaChoice {
        inline app::XmlSchemaChoice__Class** type_info = (app::XmlSchemaChoice__Class**)(modloader::win::memory::resolve_rva(0x04769DE8));
        inline app::XmlSchemaChoice__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaChoice__Class>(type_info, "System.Xml.Schema", "XmlSchemaChoice");
        }
        inline app::XmlSchemaChoice* create() {
            return il2cpp::create_object<app::XmlSchemaChoice>(get_class());
        }
    } // namespace XmlSchemaChoice
} // namespace app::classes::types
