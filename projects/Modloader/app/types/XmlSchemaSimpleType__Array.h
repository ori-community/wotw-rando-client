#pragma once
#include <Modloader/app/structs/XmlSchemaSimpleType__Array.h>
#include <Modloader/app/structs/XmlSchemaSimpleType__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleType__Array {
        inline app::XmlSchemaSimpleType__Array__Class** type_info() {
            static app::XmlSchemaSimpleType__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaSimpleType__Array__Class**)(modloader::win::memory::resolve_rva(0x04723CF0));
            }
            return cache;
        }
        inline app::XmlSchemaSimpleType__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleType__Array__Class>(type_info(), "System.Xml.Schema", "XmlSchemaSimpleType[]");
        }
        inline app::XmlSchemaSimpleType__Array* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleType__Array>(get_class());
        }
    } // namespace XmlSchemaSimpleType__Array
} // namespace app::classes::types
