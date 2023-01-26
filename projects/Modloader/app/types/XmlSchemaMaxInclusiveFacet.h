#pragma once
#include <Modloader/app/structs/XmlSchemaMaxInclusiveFacet.h>
#include <Modloader/app/structs/XmlSchemaMaxInclusiveFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaMaxInclusiveFacet {
        inline app::XmlSchemaMaxInclusiveFacet__Class** type_info() {
            static app::XmlSchemaMaxInclusiveFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaMaxInclusiveFacet__Class**)(modloader::win::memory::resolve_rva(0x0476FBC8));
            }
            return cache;
        }
        inline app::XmlSchemaMaxInclusiveFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMaxInclusiveFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaMaxInclusiveFacet");
        }
        inline app::XmlSchemaMaxInclusiveFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMaxInclusiveFacet>(get_class());
        }
    } // namespace XmlSchemaMaxInclusiveFacet
} // namespace app::classes::types
