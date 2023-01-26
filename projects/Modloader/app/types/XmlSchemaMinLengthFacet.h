#pragma once
#include <Modloader/app/structs/XmlSchemaMinLengthFacet.h>
#include <Modloader/app/structs/XmlSchemaMinLengthFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaMinLengthFacet {
        inline app::XmlSchemaMinLengthFacet__Class** type_info() {
            static app::XmlSchemaMinLengthFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaMinLengthFacet__Class**)(modloader::win::memory::resolve_rva(0x04704898));
            }
            return cache;
        }
        inline app::XmlSchemaMinLengthFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMinLengthFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaMinLengthFacet");
        }
        inline app::XmlSchemaMinLengthFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMinLengthFacet>(get_class());
        }
    } // namespace XmlSchemaMinLengthFacet
} // namespace app::classes::types
