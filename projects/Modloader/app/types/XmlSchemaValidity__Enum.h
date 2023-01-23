#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaValidity__Enum__Class.h>
#include <Modloader/app/structs/XmlSchemaValidity__Enum.h>

namespace app::classes::types {
    namespace XmlSchemaValidity__Enum {
        namespace {
            inline app::XmlSchemaValidity__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlSchemaValidity__Enum__Class** type_info = &type_info_ref;
        inline app::XmlSchemaValidity__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaValidity__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaValidity");
        }
        inline app::XmlSchemaValidity__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaValidity__Enum>(get_class());
        }
    } // namespace XmlSchemaValidity__Enum
} // namespace app::classes::types
