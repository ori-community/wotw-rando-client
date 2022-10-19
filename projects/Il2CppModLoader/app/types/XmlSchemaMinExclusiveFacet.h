#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaMinExclusiveFacet {
        inline app::XmlSchemaMinExclusiveFacet__Class** type_info = (app::XmlSchemaMinExclusiveFacet__Class**)(modloader::win::memory::resolve_rva(0x04705460));
        inline app::XmlSchemaMinExclusiveFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMinExclusiveFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaMinExclusiveFacet");
        }
        inline app::XmlSchemaMinExclusiveFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMinExclusiveFacet>(get_class());
        }
    } // namespace XmlSchemaMinExclusiveFacet
} // namespace app::classes::types
