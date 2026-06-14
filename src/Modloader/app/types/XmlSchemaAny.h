#pragma once
#include <Modloader/app/structs/XmlSchemaAny.h>
#include <Modloader/app/structs/XmlSchemaAny__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAny {
        inline app::XmlSchemaAny__Class** type_info() {
            static app::XmlSchemaAny__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaAny__Class**)(modloader::win::memory::resolve_rva(0x047368B8));
            }
            return cache;
        }
        inline app::XmlSchemaAny__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAny__Class>(type_info(), "System.Xml.Schema", "XmlSchemaAny");
        }
        inline app::XmlSchemaAny* create() {
            return il2cpp::create_object<app::XmlSchemaAny>(get_class());
        }
    } // namespace XmlSchemaAny
} // namespace app::classes::types
