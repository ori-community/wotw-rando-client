#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaType {
        inline app::XmlSchemaType__Class** type_info = (app::XmlSchemaType__Class**)(modloader::win::memory::resolve_rva(0x04705BE0));
        inline app::XmlSchemaType__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaType__Class>(type_info, "System.Xml.Schema", "XmlSchemaType");
        }
        inline app::XmlSchemaType* create() {
            return il2cpp::create_object<app::XmlSchemaType>(get_class());
        }
    } // namespace XmlSchemaType
} // namespace app::classes::types
