#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaMaxInclusiveFacet__Class.h>
#include <Modloader/app/structs/XmlSchemaMaxInclusiveFacet.h>

namespace app::classes::types {
    namespace XmlSchemaMaxInclusiveFacet {
        inline app::XmlSchemaMaxInclusiveFacet__Class** type_info = (app::XmlSchemaMaxInclusiveFacet__Class**)(modloader::win::memory::resolve_rva(0x0476FBC8));
        inline app::XmlSchemaMaxInclusiveFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMaxInclusiveFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaMaxInclusiveFacet");
        }
        inline app::XmlSchemaMaxInclusiveFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMaxInclusiveFacet>(get_class());
        }
    } // namespace XmlSchemaMaxInclusiveFacet
} // namespace app::classes::types
