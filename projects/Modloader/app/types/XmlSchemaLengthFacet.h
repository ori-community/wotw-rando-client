#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaLengthFacet__Class.h>
#include <Modloader/app/structs/XmlSchemaLengthFacet.h>

namespace app::classes::types {
    namespace XmlSchemaLengthFacet {
        inline app::XmlSchemaLengthFacet__Class** type_info = (app::XmlSchemaLengthFacet__Class**)(modloader::win::memory::resolve_rva(0x047323C0));
        inline app::XmlSchemaLengthFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaLengthFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaLengthFacet");
        }
        inline app::XmlSchemaLengthFacet* create() {
            return il2cpp::create_object<app::XmlSchemaLengthFacet>(get_class());
        }
    } // namespace XmlSchemaLengthFacet
} // namespace app::classes::types
