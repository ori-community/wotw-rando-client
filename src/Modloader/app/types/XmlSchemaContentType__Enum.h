#pragma once
#include <Modloader/app/structs/XmlSchemaContentType__Enum.h>
#include <Modloader/app/structs/XmlSchemaContentType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaContentType__Enum {
        inline app::XmlSchemaContentType__Enum__Class** type_info() {
            static app::XmlSchemaContentType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaContentType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaContentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaContentType__Enum__Class>(type_info(), "System.Xml.Schema", "XmlSchemaContentType");
        }
        inline app::XmlSchemaContentType__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaContentType__Enum>(get_class());
        }
    } // namespace XmlSchemaContentType__Enum
} // namespace app::classes::types
