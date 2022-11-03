#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaXPath {
        inline app::XmlSchemaXPath__Class** type_info = (app::XmlSchemaXPath__Class**)(modloader::win::memory::resolve_rva(0x0476B408));
        inline app::XmlSchemaXPath__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaXPath__Class>(type_info, "System.Xml.Schema", "XmlSchemaXPath");
        }
        inline app::XmlSchemaXPath* create() {
            return il2cpp::create_object<app::XmlSchemaXPath>(get_class());
        }
    } // namespace XmlSchemaXPath
} // namespace app::classes::types
