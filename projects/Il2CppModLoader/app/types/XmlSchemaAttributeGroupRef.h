#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaAttributeGroupRef {
        inline app::XmlSchemaAttributeGroupRef__Class** type_info = (app::XmlSchemaAttributeGroupRef__Class**)(modloader::win::memory::resolve_rva(0x047500D8));
        inline app::XmlSchemaAttributeGroupRef__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAttributeGroupRef__Class>(type_info, "System.Xml.Schema", "XmlSchemaAttributeGroupRef");
        }
        inline app::XmlSchemaAttributeGroupRef* create() {
            return il2cpp::create_object<app::XmlSchemaAttributeGroupRef>(get_class());
        }
    } // namespace XmlSchemaAttributeGroupRef
} // namespace app::classes::types
