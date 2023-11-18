#pragma once
#include <Modloader/app/structs/XmlSchemaMinInclusiveFacet.h>
#include <Modloader/app/structs/XmlSchemaMinInclusiveFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaMinInclusiveFacet {
        inline app::XmlSchemaMinInclusiveFacet__Class** type_info() {
            static app::XmlSchemaMinInclusiveFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaMinInclusiveFacet__Class**)(modloader::win::memory::resolve_rva(0x04754390));
            }
            return cache;
        }
        inline app::XmlSchemaMinInclusiveFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMinInclusiveFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaMinInclusiveFacet");
        }
        inline app::XmlSchemaMinInclusiveFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMinInclusiveFacet>(get_class());
        }
    } // namespace XmlSchemaMinInclusiveFacet
} // namespace app::classes::types
