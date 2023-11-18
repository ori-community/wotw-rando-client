#pragma once
#include <Modloader/app/structs/XmlSchemaMaxLengthFacet.h>
#include <Modloader/app/structs/XmlSchemaMaxLengthFacet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaMaxLengthFacet {
        inline app::XmlSchemaMaxLengthFacet__Class** type_info() {
            static app::XmlSchemaMaxLengthFacet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaMaxLengthFacet__Class**)(modloader::win::memory::resolve_rva(0x0477C278));
            }
            return cache;
        }
        inline app::XmlSchemaMaxLengthFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMaxLengthFacet__Class>(type_info(), "System.Xml.Schema", "XmlSchemaMaxLengthFacet");
        }
        inline app::XmlSchemaMaxLengthFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMaxLengthFacet>(get_class());
        }
    } // namespace XmlSchemaMaxLengthFacet
} // namespace app::classes::types
