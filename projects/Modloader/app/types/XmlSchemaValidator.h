#pragma once
#include <Modloader/app/structs/XmlSchemaValidator.h>
#include <Modloader/app/structs/XmlSchemaValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaValidator {
        inline app::XmlSchemaValidator__Class** type_info() {
            static app::XmlSchemaValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaValidator__Class**)(modloader::win::memory::resolve_rva(0x04754E40));
            }
            return cache;
        }
        inline app::XmlSchemaValidator__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaValidator__Class>(type_info(), "System.Xml.Schema", "XmlSchemaValidator");
        }
        inline app::XmlSchemaValidator* create() {
            return il2cpp::create_object<app::XmlSchemaValidator>(get_class());
        }
    } // namespace XmlSchemaValidator
} // namespace app::classes::types
