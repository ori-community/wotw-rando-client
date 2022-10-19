#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaObjectCollection {
        inline app::XmlSchemaObjectCollection__Class** type_info = (app::XmlSchemaObjectCollection__Class**)(modloader::win::memory::resolve_rva(0x0471E350));
        inline app::XmlSchemaObjectCollection__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObjectCollection__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectCollection");
        }
        inline app::XmlSchemaObjectCollection* create() {
            return il2cpp::create_object<app::XmlSchemaObjectCollection>(get_class());
        }
    } // namespace XmlSchemaObjectCollection
} // namespace app::classes::types
