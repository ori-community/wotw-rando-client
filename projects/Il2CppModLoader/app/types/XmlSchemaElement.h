#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaElement {
        inline app::XmlSchemaElement__Class** type_info = (app::XmlSchemaElement__Class**)(modloader::win::memory::resolve_rva(0x0474AC88));
        inline app::XmlSchemaElement__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaElement__Class>(type_info, "System.Xml.Schema", "XmlSchemaElement");
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
