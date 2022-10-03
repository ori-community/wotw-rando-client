#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaObject__Class** type_info;
        inline app::XmlSchemaObject__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObject__Class>(type_info, "System.Xml.Schema", "XmlSchemaObject");
        }
        inline app::XmlSchemaObject* create() {
            return il2cpp::create_object<app::XmlSchemaObject>(get_class());
        }
        inline app::XmlSchemaObject__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSchemaObject__Array>(get_class(), size);
        }
    } // namespace XmlSchemaObject
} // namespace app::classes::types
