#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleTypeList {
        inline app::XmlSchemaSimpleTypeList__Class** type_info = (app::XmlSchemaSimpleTypeList__Class**)(modloader::win::memory::resolve_rva(0x04790850));
        inline app::XmlSchemaSimpleTypeList__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleTypeList__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleTypeList");
        }
        inline app::XmlSchemaSimpleTypeList* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleTypeList>(get_class());
        }
    } // namespace XmlSchemaSimpleTypeList
} // namespace app::classes::types
