#pragma once
#include <Modloader/app/structs/XmlSchemaAll.h>
#include <Modloader/app/structs/XmlSchemaAll__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAll {
        inline app::XmlSchemaAll__Class** type_info() {
            static app::XmlSchemaAll__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaAll__Class**)(modloader::win::memory::resolve_rva(0x04792B80));
            }
            return cache;
        }
        inline app::XmlSchemaAll__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAll__Class>(type_info(), "System.Xml.Schema", "XmlSchemaAll");
        }
        inline app::XmlSchemaAll* create() {
            return il2cpp::create_object<app::XmlSchemaAll>(get_class());
        }
    } // namespace XmlSchemaAll
} // namespace app::classes::types
