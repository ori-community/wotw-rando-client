#pragma once
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#include <Modloader/app/structs/XmlSchemaForm__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaForm__Enum {
        inline app::XmlSchemaForm__Enum__Class** type_info() {
            static app::XmlSchemaForm__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaForm__Enum__Class**)(modloader::win::memory::resolve_rva(0x04735F58));
            }
            return cache;
        }
        inline app::XmlSchemaForm__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaForm__Enum__Class>(type_info(), "System.Xml.Schema", "XmlSchemaForm");
        }
        inline app::XmlSchemaForm__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaForm__Enum>(get_class());
        }
    } // namespace XmlSchemaForm__Enum
} // namespace app::classes::types
