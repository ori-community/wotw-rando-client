#pragma once
#include <Modloader/app/structs/XmlSchemaComplexContentRestriction.h>
#include <Modloader/app/structs/XmlSchemaComplexContentRestriction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaComplexContentRestriction {
        inline app::XmlSchemaComplexContentRestriction__Class** type_info() {
            static app::XmlSchemaComplexContentRestriction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaComplexContentRestriction__Class**)(modloader::win::memory::resolve_rva(0x0475DDE0));
            }
            return cache;
        }
        inline app::XmlSchemaComplexContentRestriction__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaComplexContentRestriction__Class>(type_info(), "System.Xml.Schema", "XmlSchemaComplexContentRestriction");
        }
        inline app::XmlSchemaComplexContentRestriction* create() {
            return il2cpp::create_object<app::XmlSchemaComplexContentRestriction>(get_class());
        }
    } // namespace XmlSchemaComplexContentRestriction
} // namespace app::classes::types
