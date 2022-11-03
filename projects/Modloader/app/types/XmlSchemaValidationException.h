#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaValidationException {
        inline app::XmlSchemaValidationException__Class** type_info = (app::XmlSchemaValidationException__Class**)(modloader::win::memory::resolve_rva(0x04774BE8));
        inline app::XmlSchemaValidationException__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaValidationException__Class>(type_info, "System.Xml.Schema", "XmlSchemaValidationException");
        }
        inline app::XmlSchemaValidationException* create() {
            return il2cpp::create_object<app::XmlSchemaValidationException>(get_class());
        }
    } // namespace XmlSchemaValidationException
} // namespace app::classes::types
