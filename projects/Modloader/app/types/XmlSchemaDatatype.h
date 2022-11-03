#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaDatatype {
        namespace {
            inline app::XmlSchemaDatatype__Class* type_info_ref = nullptr;
        }
        inline app::XmlSchemaDatatype__Class** type_info = &type_info_ref;
        inline app::XmlSchemaDatatype__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaDatatype__Class>(type_info, "System.Xml.Schema", "XmlSchemaDatatype");
        }
        inline app::XmlSchemaDatatype* create() {
            return il2cpp::create_object<app::XmlSchemaDatatype>(get_class());
        }
    } // namespace XmlSchemaDatatype
} // namespace app::classes::types
