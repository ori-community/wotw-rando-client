#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaWhiteSpaceFacet__Class.h>
#include <Modloader/app/structs/XmlSchemaWhiteSpaceFacet.h>

namespace app::classes::types {
    namespace XmlSchemaWhiteSpaceFacet {
        inline app::XmlSchemaWhiteSpaceFacet__Class** type_info = (app::XmlSchemaWhiteSpaceFacet__Class**)(modloader::win::memory::resolve_rva(0x04706BB8));
        inline app::XmlSchemaWhiteSpaceFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaWhiteSpaceFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaWhiteSpaceFacet");
        }
        inline app::XmlSchemaWhiteSpaceFacet* create() {
            return il2cpp::create_object<app::XmlSchemaWhiteSpaceFacet>(get_class());
        }
    } // namespace XmlSchemaWhiteSpaceFacet
} // namespace app::classes::types
