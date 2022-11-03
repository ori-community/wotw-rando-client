#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaWhiteSpace__Enum {
        inline app::XmlSchemaWhiteSpace__Enum__Class** type_info = (app::XmlSchemaWhiteSpace__Enum__Class**)(modloader::win::memory::resolve_rva(0x04770188));
        inline app::XmlSchemaWhiteSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaWhiteSpace__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaWhiteSpace");
        }
        inline app::XmlSchemaWhiteSpace__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaWhiteSpace__Enum>(get_class());
        }
    } // namespace XmlSchemaWhiteSpace__Enum
} // namespace app::classes::types
