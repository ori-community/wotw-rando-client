#pragma once
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#include <Modloader/app/structs/XmlSchemaSimpleType__Array.h>
#include <Modloader/app/structs/XmlSchemaSimpleType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleType {
        inline app::XmlSchemaSimpleType__Class** type_info() {
            static app::XmlSchemaSimpleType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaSimpleType__Class**)(modloader::win::memory::resolve_rva(0x04757910));
            }
            return cache;
        }
        inline app::XmlSchemaSimpleType__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleType__Class>(type_info(), "System.Xml.Schema", "XmlSchemaSimpleType");
        }
        inline app::XmlSchemaSimpleType* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleType>(get_class());
        }
        inline app::XmlSchemaSimpleType__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSchemaSimpleType__Array>(get_class(), size);
        }
        inline app::XmlSchemaSimpleType__Array* create_array(const std::vector<app::XmlSchemaSimpleType*>& items) {
            return il2cpp::array_new<app::XmlSchemaSimpleType__Array>(get_class(), items);
        }
    } // namespace XmlSchemaSimpleType
} // namespace app::classes::types
