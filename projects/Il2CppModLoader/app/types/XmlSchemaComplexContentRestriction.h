#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaComplexContentRestriction {
        inline app::XmlSchemaComplexContentRestriction__Class** type_info = (app::XmlSchemaComplexContentRestriction__Class**)(modloader::win::memory::resolve_rva(0x0475DDE0));
        inline app::XmlSchemaComplexContentRestriction__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaComplexContentRestriction__Class>(type_info, "System.Xml.Schema", "XmlSchemaComplexContentRestriction");
        }
        inline app::XmlSchemaComplexContentRestriction* create() {
            return il2cpp::create_object<app::XmlSchemaComplexContentRestriction>(get_class());
        }
    } // namespace XmlSchemaComplexContentRestriction
} // namespace app::classes::types
