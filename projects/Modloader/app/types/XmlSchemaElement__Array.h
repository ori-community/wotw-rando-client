#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaElement__Array {
        namespace {
            inline app::XmlSchemaElement__Array__Class* type_info_ref = nullptr;
        }
        inline app::XmlSchemaElement__Array__Class** type_info = &type_info_ref;
        inline app::XmlSchemaElement__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaElement__Array__Class>(type_info, "System.Xml.Schema", "XmlSchemaElement[]");
        }
        inline app::XmlSchemaElement__Array* create() {
            return il2cpp::create_object<app::XmlSchemaElement__Array>(get_class());
        }
    } // namespace XmlSchemaElement__Array
} // namespace app::classes::types
