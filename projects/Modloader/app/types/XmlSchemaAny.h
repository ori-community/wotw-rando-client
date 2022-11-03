#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaAny {
        inline app::XmlSchemaAny__Class** type_info = (app::XmlSchemaAny__Class**)(modloader::win::memory::resolve_rva(0x047368B8));
        inline app::XmlSchemaAny__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAny__Class>(type_info, "System.Xml.Schema", "XmlSchemaAny");
        }
        inline app::XmlSchemaAny* create() {
            return il2cpp::create_object<app::XmlSchemaAny>(get_class());
        }
    } // namespace XmlSchemaAny
} // namespace app::classes::types
