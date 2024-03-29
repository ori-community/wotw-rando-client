#pragma once
#include <Modloader/app/structs/XmlSchemaUse__Enum.h>
#include <Modloader/app/structs/XmlSchemaUse__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaUse__Enum {
        inline app::XmlSchemaUse__Enum__Class** type_info() {
            static app::XmlSchemaUse__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaUse__Enum__Class**)(modloader::win::memory::resolve_rva(0x04781DF8));
            }
            return cache;
        }
        inline app::XmlSchemaUse__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaUse__Enum__Class>(type_info(), "System.Xml.Schema", "XmlSchemaUse");
        }
        inline app::XmlSchemaUse__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaUse__Enum>(get_class());
        }
    } // namespace XmlSchemaUse__Enum
} // namespace app::classes::types
