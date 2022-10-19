#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleTypeUnion {
        inline app::XmlSchemaSimpleTypeUnion__Class** type_info = (app::XmlSchemaSimpleTypeUnion__Class**)(modloader::win::memory::resolve_rva(0x047404B0));
        inline app::XmlSchemaSimpleTypeUnion__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleTypeUnion__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleTypeUnion");
        }
        inline app::XmlSchemaSimpleTypeUnion* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleTypeUnion>(get_class());
        }
    } // namespace XmlSchemaSimpleTypeUnion
} // namespace app::classes::types
