#pragma once
#include <Modloader/app/structs/XmlSchemaDocumentation.h>
#include <Modloader/app/structs/XmlSchemaDocumentation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaDocumentation {
        inline app::XmlSchemaDocumentation__Class** type_info() {
            static app::XmlSchemaDocumentation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaDocumentation__Class**)(modloader::win::memory::resolve_rva(0x0477DCF0));
            }
            return cache;
        }
        inline app::XmlSchemaDocumentation__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaDocumentation__Class>(type_info(), "System.Xml.Schema", "XmlSchemaDocumentation");
        }
        inline app::XmlSchemaDocumentation* create() {
            return il2cpp::create_object<app::XmlSchemaDocumentation>(get_class());
        }
    } // namespace XmlSchemaDocumentation
} // namespace app::classes::types
