#pragma once
#include <Modloader/app/structs/XmlSchemaMinExclusiveFacet.h>
#include <Modloader/app/structs/XmlSchemaMinExclusiveFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaMinExclusiveFacet {
        inline app::XmlSchemaMinExclusiveFacet__Class** type_info() {
            static app::XmlSchemaMinExclusiveFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaMinExclusiveFacet__Class**)(modloader::win::memory::resolve_rva(0x04705460));
            }
            return cache;
        }
        inline app::XmlSchemaMinExclusiveFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMinExclusiveFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaMinExclusiveFacet");
        }
        inline app::XmlSchemaMinExclusiveFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMinExclusiveFacet>(get_class());
        }
    } // namespace XmlSchemaMinExclusiveFacet
} // namespace app::classes::types
