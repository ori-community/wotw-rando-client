#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleType__Array {
        inline app::XmlSchemaSimpleType__Array__Class** type_info = (app::XmlSchemaSimpleType__Array__Class**)(modloader::win::memory::resolve_rva(0x04723CF0));
        inline app::XmlSchemaSimpleType__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleType__Array__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleType[]");
        }
        inline app::XmlSchemaSimpleType__Array* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleType__Array>(get_class());
        }
    } // namespace XmlSchemaSimpleType__Array
} // namespace app::classes::types
