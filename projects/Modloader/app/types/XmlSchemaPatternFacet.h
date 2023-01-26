#pragma once
#include <Modloader/app/structs/XmlSchemaPatternFacet.h>
#include <Modloader/app/structs/XmlSchemaPatternFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaPatternFacet {
        inline app::XmlSchemaPatternFacet__Class** type_info() {
            static app::XmlSchemaPatternFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaPatternFacet__Class**)(modloader::win::memory::resolve_rva(0x047587B0));
            }
            return cache;
        }
        inline app::XmlSchemaPatternFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaPatternFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaPatternFacet");
        }
        inline app::XmlSchemaPatternFacet* create() {
            return il2cpp::create_object<app::XmlSchemaPatternFacet>(get_class());
        }
    } // namespace XmlSchemaPatternFacet
} // namespace app::classes::types
