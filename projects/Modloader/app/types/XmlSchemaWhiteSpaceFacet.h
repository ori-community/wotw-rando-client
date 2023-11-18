#pragma once
#include <Modloader/app/structs/XmlSchemaWhiteSpaceFacet.h>
#include <Modloader/app/structs/XmlSchemaWhiteSpaceFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaWhiteSpaceFacet {
        inline app::XmlSchemaWhiteSpaceFacet__Class** type_info() {
            static app::XmlSchemaWhiteSpaceFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaWhiteSpaceFacet__Class**)(modloader::win::memory::resolve_rva(0x04706BB8));
            }
            return cache;
        }
        inline app::XmlSchemaWhiteSpaceFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaWhiteSpaceFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaWhiteSpaceFacet");
        }
        inline app::XmlSchemaWhiteSpaceFacet* create() {
            return il2cpp::create_object<app::XmlSchemaWhiteSpaceFacet>(get_class());
        }
    } // namespace XmlSchemaWhiteSpaceFacet
} // namespace app::classes::types
