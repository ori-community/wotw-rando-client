#pragma once
#include <Modloader/app/structs/XmlSchemaValidationFlags__Enum.h>
#include <Modloader/app/structs/XmlSchemaValidationFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaValidationFlags__Enum {
        inline app::XmlSchemaValidationFlags__Enum__Class** type_info() {
            static app::XmlSchemaValidationFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaValidationFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaValidationFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaValidationFlags__Enum__Class>(type_info(), "System.Xml.Schema", "XmlSchemaValidationFlags");
        }
        inline app::XmlSchemaValidationFlags__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaValidationFlags__Enum>(get_class());
        }
    } // namespace XmlSchemaValidationFlags__Enum
} // namespace app::classes::types
