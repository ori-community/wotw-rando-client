#pragma once
#include <Modloader/app/structs/XmlSchemaContentProcessing__Enum.h>
#include <Modloader/app/structs/XmlSchemaContentProcessing__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaContentProcessing__Enum {
        inline app::XmlSchemaContentProcessing__Enum__Class** type_info() {
            static app::XmlSchemaContentProcessing__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaContentProcessing__Enum__Class**)(modloader::win::memory::resolve_rva(0x047583F0));
            }
            return cache;
        }
        inline app::XmlSchemaContentProcessing__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaContentProcessing__Enum__Class>(type_info(), "System.Xml.Schema", "XmlSchemaContentProcessing");
        }
        inline app::XmlSchemaContentProcessing__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaContentProcessing__Enum>(get_class());
        }
    } // namespace XmlSchemaContentProcessing__Enum
} // namespace app::classes::types
