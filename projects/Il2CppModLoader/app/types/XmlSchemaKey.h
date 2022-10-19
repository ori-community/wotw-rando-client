#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaKey {
        inline app::XmlSchemaKey__Class** type_info = (app::XmlSchemaKey__Class**)(modloader::win::memory::resolve_rva(0x04791EC0));
        inline app::XmlSchemaKey__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaKey__Class>(type_info, "System.Xml.Schema", "XmlSchemaKey");
        }
        inline app::XmlSchemaKey* create() {
            return il2cpp::create_object<app::XmlSchemaKey>(get_class());
        }
    } // namespace XmlSchemaKey
} // namespace app::classes::types
