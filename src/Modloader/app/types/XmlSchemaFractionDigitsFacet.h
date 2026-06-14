#pragma once
#include <Modloader/app/structs/XmlSchemaFractionDigitsFacet.h>
#include <Modloader/app/structs/XmlSchemaFractionDigitsFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaFractionDigitsFacet {
        inline app::XmlSchemaFractionDigitsFacet__Class** type_info() {
            static app::XmlSchemaFractionDigitsFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaFractionDigitsFacet__Class**)(modloader::win::memory::resolve_rva(0x04710710));
            }
            return cache;
        }
        inline app::XmlSchemaFractionDigitsFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaFractionDigitsFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaFractionDigitsFacet");
        }
        inline app::XmlSchemaFractionDigitsFacet* create() {
            return il2cpp::create_object<app::XmlSchemaFractionDigitsFacet>(get_class());
        }
    } // namespace XmlSchemaFractionDigitsFacet
} // namespace app::classes::types
