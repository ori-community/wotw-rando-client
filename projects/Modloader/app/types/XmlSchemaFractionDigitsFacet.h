#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaFractionDigitsFacet {
        inline app::XmlSchemaFractionDigitsFacet__Class** type_info = (app::XmlSchemaFractionDigitsFacet__Class**)(modloader::win::memory::resolve_rva(0x04710710));
        inline app::XmlSchemaFractionDigitsFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaFractionDigitsFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaFractionDigitsFacet");
        }
        inline app::XmlSchemaFractionDigitsFacet* create() {
            return il2cpp::create_object<app::XmlSchemaFractionDigitsFacet>(get_class());
        }
    } // namespace XmlSchemaFractionDigitsFacet
} // namespace app::classes::types
