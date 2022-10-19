#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaComplexType {
        inline app::XmlSchemaComplexType__Class** type_info = (app::XmlSchemaComplexType__Class**)(modloader::win::memory::resolve_rva(0x0473F4B0));
        inline app::XmlSchemaComplexType__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaComplexType__Class>(type_info, "System.Xml.Schema", "XmlSchemaComplexType");
        }
        inline app::XmlSchemaComplexType* create() {
            return il2cpp::create_object<app::XmlSchemaComplexType>(get_class());
        }
    } // namespace XmlSchemaComplexType
} // namespace app::classes::types
