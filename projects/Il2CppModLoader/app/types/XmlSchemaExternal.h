#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaExternal {
        inline app::XmlSchemaExternal__Class** type_info = (app::XmlSchemaExternal__Class**)(modloader::win::memory::resolve_rva(0x047755B8));
        inline app::XmlSchemaExternal__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaExternal__Class>(type_info, "System.Xml.Schema", "XmlSchemaExternal");
        }
        inline app::XmlSchemaExternal* create() {
            return il2cpp::create_object<app::XmlSchemaExternal>(get_class());
        }
    } // namespace XmlSchemaExternal
} // namespace app::classes::types
