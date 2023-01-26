#pragma once
#include <Modloader/app/structs/XmlSchemaValidationException.h>
#include <Modloader/app/structs/XmlSchemaValidationException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaValidationException {
        inline app::XmlSchemaValidationException__Class** type_info() {
            static app::XmlSchemaValidationException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaValidationException__Class**)(modloader::win::memory::resolve_rva(0x04774BE8));
            }
            return cache;
        }
        inline app::XmlSchemaValidationException__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaValidationException__Class>(type_info(), "System.Xml.Schema", "XmlSchemaValidationException");
        }
        inline app::XmlSchemaValidationException* create() {
            return il2cpp::create_object<app::XmlSchemaValidationException>(get_class());
        }
    } // namespace XmlSchemaValidationException
} // namespace app::classes::types
