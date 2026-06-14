#pragma once
#include <Modloader/app/structs/XmlSchemaImport.h>
#include <Modloader/app/structs/XmlSchemaImport__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaImport {
        inline app::XmlSchemaImport__Class** type_info() {
            static app::XmlSchemaImport__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaImport__Class**)(modloader::win::memory::resolve_rva(0x04730A08));
            }
            return cache;
        }
        inline app::XmlSchemaImport__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaImport__Class>(type_info(), "System.Xml.Schema", "XmlSchemaImport");
        }
        inline app::XmlSchemaImport* create() {
            return il2cpp::create_object<app::XmlSchemaImport>(get_class());
        }
    } // namespace XmlSchemaImport
} // namespace app::classes::types
