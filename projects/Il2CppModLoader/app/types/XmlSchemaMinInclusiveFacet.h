#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaMinInclusiveFacet {
        inline app::XmlSchemaMinInclusiveFacet__Class** type_info = (app::XmlSchemaMinInclusiveFacet__Class**)(modloader::win::memory::resolve_rva(0x04754390));
        inline app::XmlSchemaMinInclusiveFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMinInclusiveFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaMinInclusiveFacet");
        }
        inline app::XmlSchemaMinInclusiveFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMinInclusiveFacet>(get_class());
        }
    } // namespace XmlSchemaMinInclusiveFacet
} // namespace app::classes::types
