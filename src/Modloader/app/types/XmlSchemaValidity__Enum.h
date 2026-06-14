#pragma once
#include <Modloader/app/structs/XmlSchemaValidity__Enum.h>
#include <Modloader/app/structs/XmlSchemaValidity__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaValidity__Enum {
        inline app::XmlSchemaValidity__Enum__Class** type_info() {
            static app::XmlSchemaValidity__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaValidity__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaValidity__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaValidity__Enum__Class>(type_info(), "System.Xml.Schema", "XmlSchemaValidity");
        }
        inline app::XmlSchemaValidity__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaValidity__Enum>(get_class());
        }
    } // namespace XmlSchemaValidity__Enum
} // namespace app::classes::types
