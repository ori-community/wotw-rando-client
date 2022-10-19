#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaException {
        inline app::XmlSchemaException__Class** type_info = (app::XmlSchemaException__Class**)(modloader::win::memory::resolve_rva(0x04704300));
        inline app::XmlSchemaException__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaException__Class>(type_info, "System.Xml.Schema", "XmlSchemaException");
        }
        inline app::XmlSchemaException* create() {
            return il2cpp::create_object<app::XmlSchemaException>(get_class());
        }
    } // namespace XmlSchemaException
} // namespace app::classes::types
