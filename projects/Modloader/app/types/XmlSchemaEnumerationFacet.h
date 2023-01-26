#pragma once
#include <Modloader/app/structs/XmlSchemaEnumerationFacet.h>
#include <Modloader/app/structs/XmlSchemaEnumerationFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaEnumerationFacet {
        inline app::XmlSchemaEnumerationFacet__Class** type_info() {
            static app::XmlSchemaEnumerationFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaEnumerationFacet__Class**)(modloader::win::memory::resolve_rva(0x04705F10));
            }
            return cache;
        }
        inline app::XmlSchemaEnumerationFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaEnumerationFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaEnumerationFacet");
        }
        inline app::XmlSchemaEnumerationFacet* create() {
            return il2cpp::create_object<app::XmlSchemaEnumerationFacet>(get_class());
        }
    } // namespace XmlSchemaEnumerationFacet
} // namespace app::classes::types
