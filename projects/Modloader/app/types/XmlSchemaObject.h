#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaObject {
        inline app::XmlSchemaObject__Class** type_info = (app::XmlSchemaObject__Class**)(modloader::win::memory::resolve_rva(0x047027C0));
        inline app::XmlSchemaObject__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObject__Class>(type_info, "System.Xml.Schema", "XmlSchemaObject");
        }
        inline app::XmlSchemaObject* create() {
            return il2cpp::create_object<app::XmlSchemaObject>(get_class());
        }
        inline app::XmlSchemaObject__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSchemaObject__Array>(get_class(), size);
        }
        inline app::XmlSchemaObject__Array* create_array(const std::vector<app::XmlSchemaObject*>& items) {
            return il2cpp::array_new<app::XmlSchemaObject__Array>(get_class(), items);
        }
    } // namespace XmlSchemaObject
} // namespace app::classes::types
