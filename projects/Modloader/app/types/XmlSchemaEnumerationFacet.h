#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaEnumerationFacet {
        inline app::XmlSchemaEnumerationFacet__Class** type_info = (app::XmlSchemaEnumerationFacet__Class**)(modloader::win::memory::resolve_rva(0x04705F10));
        inline app::XmlSchemaEnumerationFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaEnumerationFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaEnumerationFacet");
        }
        inline app::XmlSchemaEnumerationFacet* create() {
            return il2cpp::create_object<app::XmlSchemaEnumerationFacet>(get_class());
        }
    } // namespace XmlSchemaEnumerationFacet
} // namespace app::classes::types
