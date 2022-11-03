#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaAttribute {
        inline app::XmlSchemaAttribute__Class** type_info = (app::XmlSchemaAttribute__Class**)(modloader::win::memory::resolve_rva(0x04739AB8));
        inline app::XmlSchemaAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAttribute__Class>(type_info, "System.Xml.Schema", "XmlSchemaAttribute");
        }
        inline app::XmlSchemaAttribute* create() {
            return il2cpp::create_object<app::XmlSchemaAttribute>(get_class());
        }
        inline app::XmlSchemaAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSchemaAttribute__Array>(get_class(), size);
        }
        inline app::XmlSchemaAttribute__Array* create_array(const std::vector<app::XmlSchemaAttribute*>& items) {
            return il2cpp::array_new<app::XmlSchemaAttribute__Array>(get_class(), items);
        }
    } // namespace XmlSchemaAttribute
} // namespace app::classes::types
