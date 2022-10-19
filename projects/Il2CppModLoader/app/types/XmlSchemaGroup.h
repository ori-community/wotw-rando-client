#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaGroup {
        inline app::XmlSchemaGroup__Class** type_info = (app::XmlSchemaGroup__Class**)(modloader::win::memory::resolve_rva(0x047281B8));
        inline app::XmlSchemaGroup__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaGroup__Class>(type_info, "System.Xml.Schema", "XmlSchemaGroup");
        }
        inline app::XmlSchemaGroup* create() {
            return il2cpp::create_object<app::XmlSchemaGroup>(get_class());
        }
    } // namespace XmlSchemaGroup
} // namespace app::classes::types
