#pragma once
#include <Modloader/app/structs/XmlSchemaComplexContent.h>
#include <Modloader/app/structs/XmlSchemaComplexContent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaComplexContent {
        inline app::XmlSchemaComplexContent__Class** type_info() {
            static app::XmlSchemaComplexContent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaComplexContent__Class**)(modloader::win::memory::resolve_rva(0x0473DE00));
            }
            return cache;
        }
        inline app::XmlSchemaComplexContent__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaComplexContent__Class>(type_info(), "System.Xml.Schema", "XmlSchemaComplexContent");
        }
        inline app::XmlSchemaComplexContent* create() {
            return il2cpp::create_object<app::XmlSchemaComplexContent>(get_class());
        }
    } // namespace XmlSchemaComplexContent
} // namespace app::classes::types
