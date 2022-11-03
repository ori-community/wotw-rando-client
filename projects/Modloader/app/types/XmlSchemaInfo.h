#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaInfo {
        inline app::XmlSchemaInfo__Class** type_info = (app::XmlSchemaInfo__Class**)(modloader::win::memory::resolve_rva(0x047418D0));
        inline app::XmlSchemaInfo__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaInfo__Class>(type_info, "System.Xml.Schema", "XmlSchemaInfo");
        }
        inline app::XmlSchemaInfo* create() {
            return il2cpp::create_object<app::XmlSchemaInfo>(get_class());
        }
    } // namespace XmlSchemaInfo
} // namespace app::classes::types
