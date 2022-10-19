#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaKeyref {
        inline app::XmlSchemaKeyref__Class** type_info = (app::XmlSchemaKeyref__Class**)(modloader::win::memory::resolve_rva(0x047817C8));
        inline app::XmlSchemaKeyref__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaKeyref__Class>(type_info, "System.Xml.Schema", "XmlSchemaKeyref");
        }
        inline app::XmlSchemaKeyref* create() {
            return il2cpp::create_object<app::XmlSchemaKeyref>(get_class());
        }
    } // namespace XmlSchemaKeyref
} // namespace app::classes::types
