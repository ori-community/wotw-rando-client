#pragma once
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaElement__Array.h>
#include <Modloader/app/structs/XmlSchemaElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaElement {
        inline app::XmlSchemaElement__Class** type_info() {
            static app::XmlSchemaElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaElement__Class**)(modloader::win::memory::resolve_rva(0x0474AC88));
            }
            return cache;
        }
        inline app::XmlSchemaElement__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaElement__Class>(type_info(), "System.Xml.Schema", "XmlSchemaElement");
        }
        inline app::XmlSchemaElement* create() {
            return il2cpp::create_object<app::XmlSchemaElement>(get_class());
        }
        inline app::XmlSchemaElement__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSchemaElement__Array>(get_class(), size);
        }
        inline app::XmlSchemaElement__Array* create_array(const std::vector<app::XmlSchemaElement*>& items) {
            return il2cpp::array_new<app::XmlSchemaElement__Array>(get_class(), items);
        }
    } // namespace XmlSchemaElement
} // namespace app::classes::types
