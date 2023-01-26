#pragma once
#include <Modloader/app/structs/XmlSchemaNumericFacet.h>
#include <Modloader/app/structs/XmlSchemaNumericFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaNumericFacet {
        inline app::XmlSchemaNumericFacet__Class** type_info() {
            static app::XmlSchemaNumericFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaNumericFacet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaNumericFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaNumericFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaNumericFacet");
        }
        inline app::XmlSchemaNumericFacet* create() {
            return il2cpp::create_object<app::XmlSchemaNumericFacet>(get_class());
        }
    } // namespace XmlSchemaNumericFacet
} // namespace app::classes::types
