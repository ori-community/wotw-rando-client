#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaNumericFacet {
        namespace {
            inline app::XmlSchemaNumericFacet__Class* type_info_ref = nullptr;
        }
        inline app::XmlSchemaNumericFacet__Class** type_info = &type_info_ref;
        inline app::XmlSchemaNumericFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaNumericFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaNumericFacet");
        }
        inline app::XmlSchemaNumericFacet* create() {
            return il2cpp::create_object<app::XmlSchemaNumericFacet>(get_class());
        }
    } // namespace XmlSchemaNumericFacet
} // namespace app::classes::types
