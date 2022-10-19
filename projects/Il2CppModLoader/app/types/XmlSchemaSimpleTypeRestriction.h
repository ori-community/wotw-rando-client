#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleTypeRestriction {
        inline app::XmlSchemaSimpleTypeRestriction__Class** type_info = (app::XmlSchemaSimpleTypeRestriction__Class**)(modloader::win::memory::resolve_rva(0x047293C8));
        inline app::XmlSchemaSimpleTypeRestriction__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleTypeRestriction__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleTypeRestriction");
        }
        inline app::XmlSchemaSimpleTypeRestriction* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleTypeRestriction>(get_class());
        }
    } // namespace XmlSchemaSimpleTypeRestriction
} // namespace app::classes::types
