#pragma once
#include <Modloader/app/structs/XmlSchemaMaxExclusiveFacet.h>
#include <Modloader/app/structs/XmlSchemaMaxExclusiveFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaMaxExclusiveFacet {
        inline app::XmlSchemaMaxExclusiveFacet__Class** type_info() {
            static app::XmlSchemaMaxExclusiveFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaMaxExclusiveFacet__Class**)(modloader::win::memory::resolve_rva(0x0472D488));
            }
            return cache;
        }
        inline app::XmlSchemaMaxExclusiveFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMaxExclusiveFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaMaxExclusiveFacet");
        }
        inline app::XmlSchemaMaxExclusiveFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMaxExclusiveFacet>(get_class());
        }
    } // namespace XmlSchemaMaxExclusiveFacet
} // namespace app::classes::types
