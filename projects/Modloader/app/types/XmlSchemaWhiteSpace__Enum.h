#pragma once
#include <Modloader/app/structs/XmlSchemaWhiteSpace__Enum.h>
#include <Modloader/app/structs/XmlSchemaWhiteSpace__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaWhiteSpace__Enum {
        inline app::XmlSchemaWhiteSpace__Enum__Class** type_info() {
            static app::XmlSchemaWhiteSpace__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaWhiteSpace__Enum__Class**)(modloader::win::memory::resolve_rva(0x04770188));
            }
            return cache;
        }
        inline app::XmlSchemaWhiteSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaWhiteSpace__Enum__Class>(type_info(), "System.Xml.Schema", "XmlSchemaWhiteSpace");
        }
        inline app::XmlSchemaWhiteSpace__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaWhiteSpace__Enum>(get_class());
        }
    } // namespace XmlSchemaWhiteSpace__Enum
} // namespace app::classes::types
