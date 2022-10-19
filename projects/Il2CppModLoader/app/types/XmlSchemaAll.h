#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaAll {
        inline app::XmlSchemaAll__Class** type_info = (app::XmlSchemaAll__Class**)(modloader::win::memory::resolve_rva(0x04792B80));
        inline app::XmlSchemaAll__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAll__Class>(type_info, "System.Xml.Schema", "XmlSchemaAll");
        }
        inline app::XmlSchemaAll* create() {
            return il2cpp::create_object<app::XmlSchemaAll>(get_class());
        }
    } // namespace XmlSchemaAll
} // namespace app::classes::types
