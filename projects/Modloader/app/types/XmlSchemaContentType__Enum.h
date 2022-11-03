#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaContentType__Enum {
        namespace {
            inline app::XmlSchemaContentType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlSchemaContentType__Enum__Class** type_info = &type_info_ref;
        inline app::XmlSchemaContentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaContentType__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaContentType");
        }
        inline app::XmlSchemaContentType__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaContentType__Enum>(get_class());
        }
    } // namespace XmlSchemaContentType__Enum
} // namespace app::classes::types
