#pragma once
#include <Modloader/app/structs/XmlSchemaFacet.h>
#include <Modloader/app/structs/XmlSchemaFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaFacet {
        inline app::XmlSchemaFacet__Class** type_info() {
            static app::XmlSchemaFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaFacet__Class**)(modloader::win::memory::resolve_rva(0x0474EC70));
            }
            return cache;
        }
        inline app::XmlSchemaFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaFacet");
        }
        inline app::XmlSchemaFacet* create() {
            return il2cpp::create_object<app::XmlSchemaFacet>(get_class());
        }
    } // namespace XmlSchemaFacet
} // namespace app::classes::types
