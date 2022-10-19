#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaMinLengthFacet {
        inline app::XmlSchemaMinLengthFacet__Class** type_info = (app::XmlSchemaMinLengthFacet__Class**)(modloader::win::memory::resolve_rva(0x04704898));
        inline app::XmlSchemaMinLengthFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMinLengthFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaMinLengthFacet");
        }
        inline app::XmlSchemaMinLengthFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMinLengthFacet>(get_class());
        }
    } // namespace XmlSchemaMinLengthFacet
} // namespace app::classes::types
