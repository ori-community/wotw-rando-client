#pragma once
#include <Modloader/app/structs/XmlSchemaObject__Array.h>
#include <Modloader/app/structs/XmlSchemaObject__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObject__Array {
        inline app::XmlSchemaObject__Array__Class** type_info() {
            static app::XmlSchemaObject__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaObject__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaObject__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObject__Array__Class>(type_info(), "System.Xml.Schema", "XmlSchemaObject[]");
        }
        inline app::XmlSchemaObject__Array* create() {
            return il2cpp::create_object<app::XmlSchemaObject__Array>(get_class());
        }
    } // namespace XmlSchemaObject__Array
} // namespace app::classes::types
